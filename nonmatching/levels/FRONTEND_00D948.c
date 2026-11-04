/* USA FRONTEND.REL:0x00D948. Retained C hypothesis, not a match.
 * The GNU EE divpad profile links 728 bytes against the 744-byte body;
 * the first difference is at body byte 16. Reopen after resolving the
 * color-state register lifetime and glyph-unpacking schedule. */
typedef unsigned char u8;
typedef signed char s8;
typedef signed short s16;
typedef unsigned int u32;
typedef unsigned long long u64;

typedef struct {
    u8 index;
    u8 alpha;
    u8 width;
    s8 y_offset;
} Glyph;

extern u32 D_0002FDD0[];
extern u32 D_0002FDF0;
extern u8 D_0002FDF4;
extern u8 D_0002FE20;
extern u32 D_0002FF98[];
extern u32 *D_0002FFDC;

extern int func_0000C448(const char *text);
extern void func_0001F550(const char *text, int *length);
extern u64 func_0000C190(u8 character, u8 style);
extern void func_0000EA70(u32 texture, s16 x0, s16 y0, s16 x1, s16 y1,
                          u8 index, u8 alpha, int brightness, int edge,
                          u32 color);

void func_0000D948(float x_scale, float y_scale, s16 x, s16 y,
                   const u8 *text)
{
    int cursor;
    int margin;
    u32 color;
    float pen;

    if (text == 0)
        return;

    if (D_0002FDF4 != 0) {
        color = D_0002FDF0;
    } else {
        color = *D_0002FFDC;
        D_0002FDF0 = color;
    }

    cursor = func_0000C448((const char *)text) - 1;
    pen = (float)x;
    margin = (s16)(int)(y_scale * 15.0f);
    if (cursor < 0)
        goto done;
    do {
        u8 character = text[cursor];
        u8 style = 0;
        Glyph glyph;
        u64 packed;
        float width;
        float y_offset;
        int baseline;
        int edge = 1;

        if (cursor > 0) {
            u8 previous = text[cursor - 1];
            if (previous == 0x90) {
                u8 index = character - 1;
                if (D_0002FE20 != 0) {
                    color = index < 16 ? D_0002FF98[index] : D_0002FF98[0];
                }
                cursor--;
                goto advance;
            }
            if (previous == 0x95) {
                int length = 0;
                func_0001F550((const char *)text + cursor + 1, &length);
                cursor--;
                cursor -= length;
                goto advance;
            }
            if ((u8)(previous + 0x6e) < 2) {
                style = previous - 0x92;
                cursor--;
            }
        }

        packed = func_0000C190(character, style);
        glyph.index = packed;
        glyph.alpha = packed >> 8;
        glyph.width = packed >> 16;
        glyph.y_offset = packed >> 24;
        y_offset = (float)glyph.y_offset * y_scale;
        width = (float)glyph.width * x_scale;
        pen -= width + x_scale;
        if (pen < 0.0f && pen + width < 0.0f)
            break;

        baseline = (int)y + (s16)(int)y_offset;
        if ((u8)(character + 0x80) > 3)
            edge = 0;
        func_0000EA70(D_0002FDD0[style], (s16)(int)pen,
                       (s16)(baseline - margin), (s16)(int)(pen + width),
                       (s16)baseline, glyph.index, glyph.alpha,
                       glyph.width + glyph.index,
                       glyph.alpha + edge + 15,
                       color);
    advance:
        cursor--;
    } while (cursor >= 0);
done:
    D_0002FDF0 = color;
}
