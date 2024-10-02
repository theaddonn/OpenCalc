#include <cstddef>
#include <cstdint>
#include <expected>

namespace oc::display {
	enum class Error {
		OutOfBoundsX,
		OutOfBoundsY,
	};

	/// Representing a Color for OpenCalc
	/// `reserverd` is not used and only for alignment purposes
	struct Color {
		std::byte r;
		std::byte g;
		std::byte b;
		/// Unused
		std::byte reserved;
	};
	
	/// Get the width of the current display
	/// Will always return the same value for the same device 
	const uint16_t getWidth();
	/// Get the width of the current display
	/// Will always return the same value for the same device 
	const uint16_t getHeight();

	bool checkBoundsX(uint16_t x);
	
	/// Check if point (x; y) is in bounds
	/// Bounds being the area of a quad between (0; 0) and (getWidth(); getHeight())
	/// Returns `true` if still in-bounce and false if not
	bool checkBounds(uint16_t x, uint16_t y);

	/// Fills the entire screen with a given color
	void fillEntire(Color color);

	/// Draws a pixel with the given color at position (x; y)
	std::expected<void, Error> drawPixel(uint16_t x, uint16_t y, Color color);
	/// Draws a line with the given color between (x1; y1) and (x1; y2)
	std::expected<void, Error> drawLine(uint16_t x1, uint16_t y1, uint16_t x2, uint16_t y2, Color color);
	/// Draws a triangle with the given color between (x1; y1), (x2; y2) and (x3; y3)
	std::expected<void, Error> drawTriangle(uint16_t x1, uint16_t y1, uint16_t x2, uint16_t y2, uint16_t x3, uint16_t y3, Color color);
	/// Draws a triangle with the given color for the inside and outline between (x1; y1), (x1; y2), (x2; y2) and (x3; y3)
	std::expected<void, Error> drawTriangle(uint16_t x1, uint16_t y1, uint16_t x2, uint16_t y2, uint16_t x3, uint16_t y3, Color color, Color outline);
	/// Draws a quad with the given color between (x1; y1), (x1; y2), (x2; y1) and (x2; y2)
	std::expected<void, Error> drawQuad(uint16_t x1, uint16_t y1, uint16_t x2, uint16_t y2, Color color);
	/// Draws a quad with the given color for the inside and outline between (x1; y1), (x1; y2), (x2; y1) and (x2; y2) 
	std::expected<void, Error> drawQuad(uint16_t x1, uint16_t y1, uint16_t x2, uint16_t y2, Color color, Color outline);
}

