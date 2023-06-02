function(add_custom_path TARGET_NAME)

target_include_directories(
    ${TARGET_NAME} PRIVATE
    "App"
    "Bsp"
)

endfunction()