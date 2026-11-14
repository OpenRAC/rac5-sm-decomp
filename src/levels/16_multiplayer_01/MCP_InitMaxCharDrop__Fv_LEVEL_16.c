/* LEVEL_16:0x097D28 -- placement copy of LEVEL_01_0A9638.c: scans every colour of both palettes and raises the global limit to the largest signed alpha byte found. */
struct Col {
    unsigned char a, b, c, d;
};
extern struct Col func_097C30(unsigned char idx, unsigned char sel);
extern int D_001A9D9C;

void MCP_InitMaxCharDrop__Fv(void)
{
    unsigned int sel;
    unsigned int idx;
    int v;

    for (sel = 0; sel < 2; sel++) {
        for (idx = 0; idx < 256; idx++) {
            v = (signed char)func_097C30(idx, sel).d;
            D_001A9D9C = D_001A9D9C < v ? v : D_001A9D9C;
        }
    }
}
