/* LEVEL_06:0x0A3E08 -- placement copy of LEVEL_01_0A9638.c: scans every colour of both palettes and raises the global limit to the largest signed alpha byte found. */
struct Col {
    unsigned char a, b, c, d;
};
extern struct Col func_0A3D10(unsigned char idx, unsigned char sel);
extern int D_001EACDC;

void MCP_InitMaxCharDrop__Fv(void)
{
    unsigned int sel;
    unsigned int idx;
    int v;

    for (sel = 0; sel < 2; sel++) {
        for (idx = 0; idx < 256; idx++) {
            v = (signed char)func_0A3D10(idx, sel).d;
            D_001EACDC = D_001EACDC < v ? v : D_001EACDC;
        }
    }
}
