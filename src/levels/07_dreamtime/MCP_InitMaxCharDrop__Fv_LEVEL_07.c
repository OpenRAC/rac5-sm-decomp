/* LEVEL_07:0x0AB638 -- placement copy of LEVEL_01_0A9638.c: scans every colour of both palettes and raises the global limit to the largest signed alpha byte found. */
struct Col {
    unsigned char a, b, c, d;
};
extern struct Col func_0AB540(unsigned char idx, unsigned char sel);
extern int D_002100DC;

void MCP_InitMaxCharDrop__Fv(void)
{
    unsigned int sel;
    unsigned int idx;
    int v;

    for (sel = 0; sel < 2; sel++) {
        for (idx = 0; idx < 256; idx++) {
            v = (signed char)func_0AB540(idx, sel).d;
            D_002100DC = D_002100DC < v ? v : D_002100DC;
        }
    }
}
