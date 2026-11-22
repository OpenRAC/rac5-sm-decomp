/* boot:0x01E67E18 -- scans every colour of both palettes and raises the global limit to the largest signed alpha byte found. Ported from OpenRAC/rac5-sm-decomp src/levels/frontend/MCP_InitMaxCharDrop__Fv_FRONTEND.c (MCP_InitMaxCharDrop__Fv_FRONTEND). */
struct Col {
    unsigned char a, b, c, d;
};
extern struct Col func_01E67D40(unsigned char idx, unsigned char sel);
extern int D_01EDDB04;

void MCP_InitMaxCharDrop__Fv(void)
{
    unsigned int sel;
    unsigned int idx;
    int v;

    for (sel = 0; sel < 2; sel++) {
        for (idx = 0; idx < 256; idx++) {
            v = (signed char)func_01E67D40(idx, sel).d;
            D_01EDDB04 = D_01EDDB04 < v ? v : D_01EDDB04;
        }
    }
}
