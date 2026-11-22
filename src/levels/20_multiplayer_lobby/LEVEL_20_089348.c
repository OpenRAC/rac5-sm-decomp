/* LEVEL_20:0x089348 -- placement copy of LEVEL_01_0B0478.c: debug font page: prints the 256 codes as rows of cells, each row wrapped in a fixed marker string. */
typedef unsigned char u8;
typedef unsigned int u32;

extern u32 D_0010C844;
extern u8 D_0010C848;
extern float D_0010C84C;

extern void *memset(void *p, int c, unsigned n);
extern void func_082940(short x, short y, const char *text, float scale_x, float scale_y);

void func_089348(void)
{
    char buf[256];
    u32 i;
    u32 j;
    int pos;
    signed char code;

    for (i = 0; i < 0x100; i += D_0010C844) {
        memset(buf, 0, 0x100);
        code = i;
        buf[0] = 'A';
        buf[1] = 'O';
        buf[2] = 'Z';
        buf[3] = 'a';
        buf[4] = 'e';
        buf[5] = 'z';
        pos = 6;
        for (j = 0; j < D_0010C844; j++) {
            if (D_0010C848 != 0) {
                buf[pos++] = (char)0x93;
            }
            buf[pos++] = code++;
        }
        buf[pos++] = 'Z';
        buf[pos++] = 'z';
        buf[pos++] = 'A';
        func_082940(20, i / D_0010C844 * 20, buf, D_0010C84C, D_0010C84C);
    }
}
