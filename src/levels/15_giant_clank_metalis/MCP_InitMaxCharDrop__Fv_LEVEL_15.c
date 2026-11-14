/* LEVEL_15:0x089F00 -- placement copy of LEVEL_01_0A9638.c: scans every colour of both palettes and raises the global limit to the largest signed alpha byte found. */
struct Col {
    unsigned char a, b, c, d;
};
extern struct Col func_089E08(unsigned char idx, unsigned char sel);
extern int D_00150A5C;

void MCP_InitMaxCharDrop__Fv(void)
{
    unsigned int sel;
    unsigned int idx;
    int v;

    for (sel = 0; sel < 2; sel++) {
        for (idx = 0; idx < 256; idx++) {
            v = (signed char)func_089E08(idx, sel).d;
            D_00150A5C = D_00150A5C < v ? v : D_00150A5C;
        }
    }
}
