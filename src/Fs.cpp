#include "Fs.hpp"

std::expected<std::vector<std::byte>, oc::fs::Error> oc::fs::readFile(std::string& path) {
	#if defined LINUX
	
	#elif defined WINDOWS

	#endif
	return {};
}

std::expected<void, oc::fs::Error> oc::fs::writeFile(std::string& path, std::vector<std::byte>& data) {
	return {};
}

