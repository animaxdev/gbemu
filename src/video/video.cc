#include "video.h"

Video::Video(MMU& inMMU) :
    mmu(inMMU)
{
}

FrameBuffer Video::get_framebuffer() const {
    FrameBuffer buffer;
    for (unsigned int x = 0; x < GAMEBOY_WIDTH; x++) {
        for (unsigned int y = 0; y < GAMEBOY_HEIGHT; y++) {
            buffer.set_pixel(x, y, Color::Color0);
        }
    }
    return buffer;
}