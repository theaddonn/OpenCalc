package("OpenCalc")
    set_kind("static")
    set_languages("c++23")
    
    -- Add header and source files
    add_headerfiles("src/*.hpp")
    add_files("src/*.cpp")

    -- Platform-specific settings
    on_install(function (package)
        if is_plat("linux") then
            add_defines("LINUX", "SDL")
            add_packages("libsdl")
        elseif is_plat("windows") then
            add_defines("WINDOWS", "SDL")
            add_packages("libsdl")
        elseif is_plat("hollyhock2") then
            add_defines("HOLLYHOCK2", "CAS")
        elseif is_plat("gint") then
            add_defines("GINT", "CAS")
        elseif is_plat("ndless") then
            add_defines("NDLESS", "CAS")
        end

        -- Install the library and headers
        os.cp("src/*.h", package:installdir("include"))
        os.cp("libOpenCalc.a", package:installdir("lib"))
    end)
    
    -- Specify package dependencies
    add_deps("libsdl")

