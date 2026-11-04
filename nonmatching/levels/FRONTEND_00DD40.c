/* USA FRONTEND.REL:0x00DD40. Retained C hypothesis, not a match.
 * The pinned GNU EE profile links 1800 bytes against a 1896-byte body;
 * first difference at body byte 260. Reopen after reconstructing
 * the text-wrap control flow and its local variable lifetimes. */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed char s8;
typedef signed short s16;

#define BYTE(p, n) (*(u8 *)((u8 *)(p) + (n)))
#define HALF(p, n) (*(u16 *)((u8 *)(p) + (n)))
#define SHALF(p, n) (*(s16 *)((u8 *)(p) + (n)))
#define WORD(p, n) (*(u32 *)((u8 *)(p) + (n)))
#define TEXT(p) ((char *)WORD(p, 0x14))

extern u32 *D_0002FFDC;
extern u32 D_0002FDF0;
extern u8 D_0002FDF4;
extern s16 D_0002FDDC;

extern void func_0000BD78(void *widget);
extern void func_0000E4A8(s16 x, s16 y, s16 width, s16 height, u32 color);
extern u32 func_0000C448(char *text);
extern s16 func_0000B5E0(void *widget);
extern int func_0000C338(char *text, int length);
extern void func_0001F550(char *text, int *length);
extern void func_0000C510(s16 x, s16 y, char *text);
extern void func_0000D6F0(s16 x, s16 y, char *text);
extern void func_0000CFE0(s16 x, s16 y, char *text);
extern void func_0000BCF8(void);
extern int func_0000B658(void *widget);
extern void func_0000DD18(void *widget);

void func_0000DD40(void *widget) {
    u32 saved_color = *D_0002FFDC;
    u16 first_coord;
    int left, right, available, baseline;
    int cursor;
    int y;
    int final_width;
    D_0002FDF0 = saved_color;

    if (WORD(widget, 0x20) & 0x1000) {
        int timer = WORD(widget, 0x34);
        if (timer != 0) {
            timer--;
            WORD(widget, 0x34) = timer;
        }
        if (timer == 0) {
            WORD(widget, 0x34) = WORD(widget, 0x30);
            BYTE(widget, 0x38) ^= 1;
        }
        *D_0002FFDC = BYTE(widget, 0x38) ? WORD(widget, 0x2C) : saved_color;
    }

    if (!(WORD(widget, 0x20) & 0x20)) {
        func_0000BD78(widget);
        if (!(WORD(widget, 0x20) & 0x40)) {
            if (WORD(widget, 0x20) & 0x80) {
                func_0000E4A8(SHALF(widget, 0), SHALF(widget, 4),
                              SHALF(widget, 8), SHALF(widget, 12), WORD(widget, 0x28));
            } else {
                func_0000E4A8(SHALF(widget, 0), SHALF(widget, 4),
                              SHALF(widget, 8), SHALF(widget, 12), 0x80000000u);
            }
        }
    }
    if (WORD(widget, 0x14) == 0) return;
    D_0002FDF4 = 1;
    if (!(WORD(widget, 0x20) & 0x10)) WORD(widget, 0x1C) = func_0000C448(TEXT(widget));
    first_coord = HALF(widget, 0);
    left = (s16)(first_coord + HALF(widget, 0x10));
    right = (s16)(HALF(widget, 8) - HALF(widget, 0x12));
    available = (s16)(right - left);
    if (available < 0) available = 16;
    baseline = func_0000B5E0(widget);
    BYTE(widget, 0x25) = 0;
    cursor = 0;
    final_width = (s16)HALF(widget, 4);
    y = HALF(widget, 4);

    while (WORD(widget, 0x1C) != 0 && cursor < WORD(widget, 0x1C)) {
        int progress = 0;
        int used = 0;
        int line_end = 0;
        int newline_seen = 0;
        for (;;) {
            int segment_start = cursor + progress;
            int segment_length = 0;
            int delimiter = 0;
            int measured;
            do {
                s8 ch = TEXT(widget)[cursor + progress];
                if ((u8)(ch + 0x6e) < 2 || ch == -0x70) {
                    progress += 2;
                    segment_length += 2;
                } else if (ch == -0x6b) {
                    int sequence_length = 0;
                    func_0001F550(TEXT(widget) + cursor + 1, &sequence_length);
                    progress += sequence_length + 1;
                    segment_length += sequence_length + 1;
                } else if (ch == '\n') {
                    progress++;
                    segment_length++;
                    newline_seen = 1;
                    delimiter = 1;
                } else if (ch == ' ') {
                    progress++;
                    segment_length++;
                    delimiter = 1;
                } else if (ch == 0) {
                    line_end = 1;
                    delimiter = 1;
                } else {
                    progress++;
                    segment_length++;
                }
            } while (!delimiter);
            measured = func_0000C338(TEXT(widget) + segment_start, segment_length);
            if (available < measured) {
                int scan = 0;
                int glyph_width;
                progress -= segment_length;
                line_end = 1;
                glyph_width = func_0000C338(TEXT(widget) + segment_start, 1);
                final_width = used + glyph_width;
                if (final_width <= available) {
                    for (;;) {
                        s8 ch = TEXT(widget)[segment_start + scan];
                        if ((u8)(ch + 0x6e) < 2 || ch == -0x70) {
                            scan += 2;
                        } else if (ch == -0x6b) {
                            int sequence_length = 0;
                            func_0001F550(TEXT(widget) + cursor + 1, &sequence_length);
                            scan += sequence_length + 1;
                        } else if (ch == '\n' || ch == 0) {
                            progress += scan;
                            break;
                        } else {
                            scan++;
                        }
                        glyph_width = func_0000C338(TEXT(widget) + segment_start + scan, 1);
                        final_width += glyph_width;
                        if (available < final_width) {
                            progress += scan;
                            break;
                        }
                    }
                }
            } else if (!newline_seen) {
                if (available < used + measured) {
                    line_end = 1;
                    progress -= segment_length;
                } else {
                    used = (s16)(used + measured);
                }
            } else {
                line_end = 1;
                if (available < used + measured) progress -= segment_length;
            }
            if (line_end) break;
        }

        BYTE(widget, 0x25)++;
        y = (s16)(y + BYTE(widget, 0x24) + 16);
        if (!(WORD(widget, 0x20) & 0x20)) {
            char *end = TEXT(widget) + cursor + progress;
            char saved_end = *end;
            int draw_y = y + ((int)WORD(widget, 0x18) >> 4);
            int style = BYTE(widget, 0x20) & 3;
            *end = 0;
            if (draw_y + 16 + BYTE(widget, 0x24) >= 1 &&
                draw_y - 16 - BYTE(widget, 0x24) <= 0x10f) {
                if (style == 0) {
                    func_0000D6F0((s16)right, (s16)draw_y, TEXT(widget) + cursor);
                } else if (style == 3) {
                    func_0000CFE0((s16)baseline, (s16)draw_y, TEXT(widget) + cursor);
                } else {
                    func_0000C510((s16)left, (s16)draw_y, TEXT(widget) + cursor);
                }
            }
            *end = saved_end;
        }
        final_width = y;
        cursor += progress - (progress > 0) + 1;
    }

    if (BYTE(widget, 0x51) == 0 && WORD(widget, 0x4C) != BYTE(widget, 0x25)) {
        WORD(widget, 0x4C) = BYTE(widget, 0x25);
        BYTE(widget, 0x50) = 1;
    }
    HALF(widget, 0x26) = (s16)final_width + D_0002FDDC +
                         (s16)((int)WORD(widget, 0x18) >> 4);
    if (!(WORD(widget, 0x20) & 0x20)) func_0000BCF8();

    if (WORD(widget, 0x20) & 0xF00) {
        if (BYTE(widget, 0x48) != 0 && !(WORD(widget, 0x20) & 0x700)) {
            BYTE(widget, 0x48) = 0;
            if (BYTE(widget, 0x39) == 0) {
                HALF(widget, 0x18) = 0;
                HALF(widget, 0x1A) = 0;
            } else {
                WORD(widget, 0x18) = (func_0000B658(widget) >> 1) << 3;
            }
        }
        if ((s16)HALF(widget, 0x26) < (int)WORD(widget, 0x0C)) {
            if (WORD(widget, 0x20) & 0x700) {
                BYTE(widget, 0x49) = 0;
                BYTE(widget, 0x50) = 0;
            }
        } else if (!(WORD(widget, 0x20) & 0x700)) {
            BYTE(widget, 0x49) = 1;
        } else if (BYTE(widget, 0x51) == 0) {
            if (WORD(widget, 0x20) & 0x400) {
                /* The existing scroll state is retained. */
            } else if (WORD(widget, 0x20) & 0x200) {
                BYTE(widget, 0x49) = 0;
                BYTE(widget, 0x50) = 0;
                WORD(widget, 0x18) -= (s16)HALF(widget, 0x26) - WORD(widget, 0x0C);
            } else {
                BYTE(widget, 0x49) = BYTE(widget, 0x50) != 0;
            }
        } else {
            BYTE(widget, 0x49) = 0;
        }
        if (BYTE(widget, 0x49) != 0) {
            if ((s16)HALF(widget, 0x26) >= (int)WORD(widget, 4)) {
                if (WORD(widget, 0x3C) == 0 || (WORD(widget, 0x20) & 0x100)) {
                    WORD(widget, 0x18) -= WORD(widget, 0x44);
                } else {
                    WORD(widget, 0x3C)--;
                }
            }
            if ((s16)HALF(widget, 0x26) < (int)WORD(widget, 4) &&
                !(WORD(widget, 0x20) & 0x700) && WORD(widget, 0x40) != 0 &&
                --WORD(widget, 0x40) == 0) {
                func_0000DD18(widget);
            }
        }
    }
    *D_0002FFDC = saved_color;
    D_0002FDF4 = 0;
}
