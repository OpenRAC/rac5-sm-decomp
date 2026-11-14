/* LEVEL_05:0x0A7BF8 -- placement copy of LEVEL_01_0A9638.c: scans every colour of both palettes and raises the global limit to the largest signed alpha byte found. */
struct Col {
    unsigned char a, b, c, d;
};
extern struct Col func_0A7B00(unsigned char idx, unsigned char sel);
extern int D_001EB15C;

void MCP_InitMaxCharDrop__Fv(void)
{
    unsigned int sel;
    unsigned int idx;
    int v;

    for (sel = 0; sel < 2; sel++) {
        for (idx = 0; idx < 256; idx++) {
            v = (signed char)func_0A7B00(idx, sel).d;
            D_001EB15C = D_001EB15C < v ? v : D_001EB15C;
        }
    }
}
