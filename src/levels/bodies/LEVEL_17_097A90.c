typedef unsigned char u8;
typedef unsigned int u32;

extern int func_097460(void *p);
extern u32 func_18A360(float value);
extern void func_097740(short x, short y, const u8 *text,
                          float scale_x, float scale_y);

void func_097A90(float narrow_x, float narrow_y,
                   float wide_x, float wide_y,
                   short x, short y, u32 max_width, u8 *text)
{
    int width = func_097460(text);
    u32 scaled = func_18A360((float)width * narrow_x);

    if (max_width < scaled)
        func_097740(x, y, text, wide_x, wide_y);
    else
        func_097740(x, y, text, narrow_x, narrow_y);
}
