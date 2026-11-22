/* LEVEL_01:0x0B0478 -- debug font page: prints the 256 codes as rows of cells, each row wrapped in a fixed marker string. */
typedef unsigned char u8;
typedef unsigned int u32;

extern u32 D_001FC124;
extern u8 D_001FC128;
extern float D_001FC12C;

extern void *memset(void *p, int c, unsigned n);
extern void func_0A9B58(short x, short y, const char *text, float scale_x, float scale_y);

void func_0B0478(void)
{
    char buf[256];
    u32 i;
    u32 j;
    int pos;
    signed char code;

    for (i = 0; i < 0x100; i += D_001FC124) {
        memset(buf, 0, 0x100);
        code = i;
        buf[0] = 'A';
        buf[1] = 'O';
        buf[2] = 'Z';
        buf[3] = 'a';
        buf[4] = 'e';
        buf[5] = 'z';
        pos = 6;
        for (j = 0; j < D_001FC124; j++) {
            if (D_001FC128 != 0) {
                buf[pos++] = (char)0x93;
            }
            buf[pos++] = code++;
        }
        buf[pos++] = 'Z';
        buf[pos++] = 'z';
        buf[pos++] = 'A';
        func_0A9B58(20, i / D_001FC124 * 20, buf, D_001FC12C, D_001FC12C);
    }
}
