add_rules("mode.debug", "mode.release")

option("target-host")
	set_showmenu(true)
	set_values("linux-sdl", "windows-sdl", "hollyhock2", "gint", "ndless")

target("OpenCalc")
	set_kind("static")
    	set_languages("c++23")
	add_headerfiles("src/*.h")
    	add_files("src/*.cpp")

local target_host = get_config("target-host")

if target_host == "linux-sdl" then
	-- defines
	add_defines("LINUX")
	add_defines("SDL")
	-- deps
	add_packages("libsdl")
elseif target_host == "windows_sdl" then 
	-- defines
	add_defines("WINDOWS")
	add_defines("SDL")
	-- deps
	add_packages("libsdl")
elseif target_host == "hollyhock2" then 
	-- defines
	add_defines("HOLLYHOCK2")
	add_defines("CAS")
	-- deps
	-- TODO
elseif target_host == "gint" then 
	-- defines
	add_defines("GINT")
	add_defines("CAS")
	-- deps
	-- TODO
elseif target_host == "ndless" then
	-- defines
	add_defines("NDLESS")
	add_defines("CAS")
	-- deps
	-- TODO
end

target("OpenCalc")
    	set_kind("static")
    	add_headerfiles("src/*.h")
    	add_files("src/*.cpp")

