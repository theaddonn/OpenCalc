add_rules("mode.debug", "mode.release")

target("OpenCalc")
	set_kind("static")
    	set_languages("c++23")
	add_headerfiles("src/*.h")
    	add_files("src/*.cpp")

if is_plat("linux") then
	-- defines
	add_defines("LINUX")
	add_defines("SDL")
	-- deps
	add_packages("libsdl")
elseif is_plat("windows") then 
	-- defines
	add_defines("WINDOWS")
	add_defines("SDL")
	-- deps
	add_packages("libsdl")
elseif is_plat("hollyhock2") then 
	-- defines
	add_defines("HOLLYHOCK2")
	add_defines("CAS")
	-- deps
	-- TODO
elseif is_plat("gint") then 
	-- defines
	add_defines("GINT")
	add_defines("CAS")
	-- deps
	-- TODO
elseif is_plat("ndless") then
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

