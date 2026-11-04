typedef unsigned char u8;
typedef signed char s8;
typedef short s16;
typedef unsigned int u32;
typedef unsigned long long u64;

extern u32 D_0002FDF0;
extern u8 D_0002FDF4;
extern u32 *D_0002FFDC;
extern u8 D_0002FE20;
extern u32 D_0002FF98[];
extern void *D_0002F9D0[];
extern void *D_0002FDD0[];

extern int func_0000C4C8(const u8 *);
extern u32 func_0000C448(const u8 *);
extern int func_0001F550(const u8 *, int *);
extern void func_0000EC10(void *, s16, s16, s16, s16, int);
extern u64 func_0000C190(u8, u8);
extern void func_0000EA70(void *, s16, s16, s16, s16,
                          u8, u8, int, int, u32);

void func_0000D298(float scale_x, float scale_y, s16 x, s16 y,
                   const u8 *text)
{
    u32 color = D_0002FDF0;
    if (text != 0) {
        int width;
        u32 length;
        u32 index = 0;
        s16 start_x;
        s16 line_height;
        float pen_x;

        if (D_0002FDF4 == 0)
            color = *D_0002FFDC;
        D_0002FDF0 = color;
        width = func_0000C4C8(text);
        length = func_0000C448(text);
        start_x = (s16)(x - ((s16)(int)((float)width * scale_x) >> 1));
        pen_x = (float)start_x;
        line_height = (s16)(int)(scale_y * 15.0f);

        if (length != 0) {
            s16 right = (s16)(start_x + 16);
            do {
                u8 code = text[index];
                if (code == 0x90) {
                    index++;
                    if (D_0002FE20 != 0 && (u8)(text[index] - 1) < 16)
                        color = D_0002FF98[text[index] - 1];
                    else if (D_0002FE20 != 0)
                        color = D_0002FF98[0];
                } else {
                    if (code == 0x95) {
                        int sequence_length = 0;
                        int icon = func_0001F550(text + index + 1, &sequence_length);
                        func_0000EC10(D_0002F9D0[icon], (s16)(int)pen_x,
                                      (s16)(y - 16), right, y, -1);
                        index += 1 + sequence_length;
                        pen_x += scale_x * 17.0f;
                    } else {
                        u32 mode = code - 0x92;
                        u64 metrics;
                        float advance;
                        int top;
                        u8 low, middle, high;
                        s8 rise;
                        int width_adjust;

                        if ((u8)(code + 0x6e) > 1)
                            mode = 0;
                        if (mode != 0)
                            index++;
                        metrics = func_0000C190(text[index], (u8)mode);
                        low = (u8)metrics;
                        middle = (u8)(metrics >> 8);
                        high = (u8)(metrics >> 16);
                        rise = (s8)(metrics >> 24);
                        advance = (float)high * scale_x;
                        top = y + (s16)(int)((float)rise * scale_y);
                        width_adjust = ((u8)(text[index] + 0x80) < 4) ? 16 : 15;
                        func_0000EA70(D_0002FDD0[mode], (s16)(int)pen_x,
                                      (s16)(top - line_height),
                                      (s16)(int)(pen_x + advance), (s16)top,
                                      low, middle, high + low,
                                      middle + width_adjust, color);
                        advance = advance + scale_x;
                        pen_x = pen_x + advance;
                    }
                    if (pen_x > 480.0f) {
                        D_0002FDF0 = color;
                        return;
                    }
                }
                index++;
            } while (index < length);
        }
    }
    D_0002FDF0 = color;
}
