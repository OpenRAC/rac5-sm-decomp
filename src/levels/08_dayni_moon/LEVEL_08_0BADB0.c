/* LEVEL_08:0x0BADB0 -- placement copy of LEVEL_01_0B0478.c: debug font page: prints the 256 codes as rows of cells, each row wrapped in a fixed marker string. */
typedef unsigned char u8;
typedef unsigned int u32;

extern u32 D_00244FE4;
extern u8 D_00244FE8;
extern float D_00244FEC;

extern void *memset(void *p, int c, unsigned n);
extern void func_0B4490(short x, short y, const char *text, float scale_x, float scale_y);

void func_0BADB0(void)
{
    char buf[256];
    u32 i;
    u32 j;
    int pos;
    signed char code;

    for (i = 0; i < 0x100; i += D_00244FE4) {
        memset(buf, 0, 0x100);
        code = i;
        buf[0] = 'A';
        buf[1] = 'O';
        buf[2] = 'Z';
        buf[3] = 'a';
        buf[4] = 'e';
        buf[5] = 'z';
        pos = 6;
        for (j = 0; j < D_00244FE4; j++) {
            if (D_00244FE8 != 0) {
                buf[pos++] = (char)0x93;
            }
            buf[pos++] = code++;
        }
        buf[pos++] = 'Z';
        buf[pos++] = 'z';
        buf[pos++] = 'A';
        func_0B4490(20, i / D_00244FE4 * 20, buf, D_00244FEC, D_00244FEC);
    }
}
