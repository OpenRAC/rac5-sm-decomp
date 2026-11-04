typedef unsigned char u8;
typedef unsigned int u32;

extern int func_0A30F0(void *p);
extern u32 func_1BBF50(float value);
extern void func_0A42C0(short x, short y, const u8 *text,
                          float scale_x, float scale_y);

void func_0A4640(float narrow_x, float narrow_y,
                   float wide_x, float wide_y,
                   short x, short y, u32 max_width, u8 *text)
{
    int width = func_0A30F0(text);
    u32 scaled = func_1BBF50((float)width * narrow_x);

    if (max_width < scaled)
        func_0A42C0(x, y, text, wide_x, wide_y);
    else
        func_0A42C0(x, y, text, narrow_x, narrow_y);
}
