#pragma once
#include <string>
#include <expected>

namespace oc {
	#if defined LINUX
	const std::string TARGET = "Linux";
	#elif defined WINDOWS 
	const std::string TARGET = "Windows";
	#elif defined HOLLYHOCK2
	const std::string TARGET = "Hollyhock2";
	#elif defined GINT
	const std::string TARGET = "Gint";
	#elif defined NDLESS
	const std::string TARGET = "Ndless";
	#else
	#error Missing TARGET
	#endif
	
	#if defined SDL
	const std::string GRAPHICS = "Sdl";
	#elif defined CAS
	const std::string GRAPHICS = "Calculator";
	#else	
	#error Missing GRAPHICS
	#endif
	
	enum class Error {
		// TODO
	};

	std::expected<void, Error> startup();
	std::expected<void, Error> cleanup();
}

