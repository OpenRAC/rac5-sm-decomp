/* LEVEL_09:0x0A68E8 -- placement copy of LEVEL_01_0A9638.c: scans every colour of both palettes and raises the global limit to the largest signed alpha byte found. */
struct Col {
    unsigned char a, b, c, d;
};
extern struct Col func_0A67F0(unsigned char idx, unsigned char sel);
extern int D_001E5BDC;

void MCP_InitMaxCharDrop__Fv(void)
{
    unsigned int sel;
    unsigned int idx;
    int v;

    for (sel = 0; sel < 2; sel++) {
        for (idx = 0; idx < 256; idx++) {
            v = (signed char)func_0A67F0(idx, sel).d;
            D_001E5BDC = D_001E5BDC < v ? v : D_001E5BDC;
        }
    }
}
