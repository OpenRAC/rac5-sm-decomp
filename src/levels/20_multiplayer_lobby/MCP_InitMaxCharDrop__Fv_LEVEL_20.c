/* LEVEL_20:0x082420 -- placement copy of LEVEL_01_0A9638.c: scans every colour of both palettes and raises the global limit to the largest signed alpha byte found. */
struct Col {
    unsigned char a, b, c, d;
};
extern struct Col func_082328(unsigned char idx, unsigned char sel);
extern int D_0010C47C;

void MCP_InitMaxCharDrop__Fv(void)
{
    unsigned int sel;
    unsigned int idx;
    int v;

    for (sel = 0; sel < 2; sel++) {
        for (idx = 0; idx < 256; idx++) {
            v = (signed char)func_082328(idx, sel).d;
            D_0010C47C = D_0010C47C < v ? v : D_0010C47C;
        }
    }
}
