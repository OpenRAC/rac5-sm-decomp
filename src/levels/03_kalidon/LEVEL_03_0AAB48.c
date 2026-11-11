typedef unsigned char u8;
typedef unsigned int u32;

extern int func_0A95F8(void *p);
extern u32 func_203908(float value);
extern void func_0AA7C8(short x, short y, const u8 *text,
                          float scale_x, float scale_y);

void func_0AAB48(float narrow_x, float narrow_y,
                   float wide_x, float wide_y,
                   short x, short y, u32 max_width, u8 *text)
{
    int width = func_0A95F8(text);
    u32 scaled = func_203908((float)width * narrow_x);

    if (max_width < scaled)
        func_0AA7C8(x, y, text, wide_x, wide_y);
    else
        func_0AA7C8(x, y, text, narrow_x, narrow_y);
}
