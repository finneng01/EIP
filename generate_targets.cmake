# Funktion zum Bereinigen von nicht-ASCII-Zeichen im Zielnamen
function(sanitize_target_name input output)
    string(REPLACE "ä" "ae" _tmp "${input}")
    string(REPLACE "Ä" "Ae" _tmp "${_tmp}")
    string(REPLACE "ö" "oe" _tmp "${_tmp}")
    string(REPLACE "Ö" "Oe" _tmp "${_tmp}")
    string(REPLACE "ü" "ue" _tmp "${_tmp}")
    string(REPLACE "Ü" "Ue" _tmp "${_tmp}")
    string(REPLACE "ß" "ss" _tmp "${_tmp}")
    string(REGEX REPLACE "[^a-zA-Z0-9_]" "_" _tmp "${_tmp}") # alles andere raus
    set(${output} "${_tmp}" PARENT_SCOPE)
endfunction()

# Suche nach allen .cpp-Dateien
file(GLOB_RECURSE CPP_FILES "${CMAKE_SOURCE_DIR}/src/*.cpp")

foreach(FILE ${CPP_FILES})
    file(READ "${FILE}" CONTENTS)

    # Prüfe, ob die Datei eine main()-Funktion enthält
    string(REGEX MATCH "int main\\s*\\(.*\\)" HAS_MAIN "${CONTENTS}")
    if(NOT HAS_MAIN EQUAL -1)
        get_filename_component(FILENAME ${FILE} NAME_WE)

        # Bereinige den Zielnamen (für CMake und Compiler)
        sanitize_target_name(${FILENAME} SANITIZED_NAME)

        # Erstelle die Executable
        add_executable(${SANITIZED_NAME} ${FILE})
        message(STATUS "Executable hinzugefügt: ${SANITIZED_NAME} -> ${FILE}")
    endif()
endforeach()