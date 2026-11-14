/* LEVEL_01:0x0A9638 -- scans every colour of both palettes and raises the global limit to the largest signed alpha byte found. */
struct Col {
    unsigned char a, b, c, d;
};
extern struct Col func_0A9540(unsigned char idx, unsigned char sel);
extern int D_001FBDDC;

void MCP_InitMaxCharDrop__Fv(void)
{
    unsigned int sel;
    unsigned int idx;
    int v;

    for (sel = 0; sel < 2; sel++) {
        for (idx = 0; idx < 256; idx++) {
            v = (signed char)func_0A9540(idx, sel).d;
            D_001FBDDC = D_001FBDDC < v ? v : D_001FBDDC;
        }
    }
}
