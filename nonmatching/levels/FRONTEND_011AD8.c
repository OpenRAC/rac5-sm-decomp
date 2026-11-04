/* USA FRONTEND.REL:0x011AD8. Retained C reconstruction hypothesis.
 * Byte-exact credit requires a complete linked comparison. */
typedef unsigned short u16;
typedef unsigned int u32;

extern void func_00007ED8(void);
extern u32 func_00008AF8(void *object);
extern u32 func_00008B28(void *object);
extern void func_00009340(float half_x, float half_y, float base_x,
                          float base_y, float depth,
                          short x, short y, short width, short height,
                          u32 extra0, u32 extra1, u32 extra2, u32 extra3,
                          u32 color);

void func_00011AD8(float scale_x, float scale_y, float depth, void *object,
                   short x, short y, u16 width, u16 height,
                   u32 extra0, u32 extra1, u32 extra2, u32 extra3)
{
    u32 origin_x;
    u32 origin_y;
    u16 scaled_width;
    u16 scaled_height;
    short left;
    short top;

    func_00007ED8();
    origin_x = func_00008AF8(object);
    origin_y = func_00008B28(object);
    scaled_width = (u16)(int)((float)width * scale_x);
    scaled_height = (u16)(int)((float)height * scale_y);

    if (scaled_width >= 481 || scaled_height >= 273) {
        left = (short)(x - (scaled_width >> 1));
        top = (short)(y - (scaled_height >> 1));
        func_00009340(0.5f, 0.5f, (float)origin_x + 0.5f,
                      (float)origin_y + 0.5f, depth,
                      left, top, (short)scaled_width, (short)scaled_height,
                      extra0, extra1, extra2, extra3, 0x00ffffffu);
    } else {
        left = (short)(x - (scaled_width >> 1));
        top = (short)(y - (scaled_height >> 1));
        func_00009340(0.5f, 0.5f, (float)origin_x + 0.5f,
                      (float)origin_y + 0.5f, depth,
                      left, top, (short)scaled_width, (short)scaled_height,
                      extra0, extra1, extra2, extra3, 0x00ffffffu);
    }
}
