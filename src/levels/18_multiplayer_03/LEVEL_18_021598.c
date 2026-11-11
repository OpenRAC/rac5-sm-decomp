/* LEVEL_18:0x021598 -- placement copy of LEVEL_16_021F50.c: looks up a two-dimensional table cell and returns it when its key word is two. */
struct Cell9 {
    int w0;
    int w4;
    char pad8[0x54 - 0x08];
};

extern struct Cell9 D_001A04F8[][5];

void *func_021598(unsigned int a0, int a1)
{
    if (a0 < 0x19) {
        a1 = a1 + 1;
        if (a1 >= 0) {
            if (a1 < 6) {
                if (D_001A04F8[a0][a1].w4 == 2) {
                    return &D_001A04F8[a0][a1];
                }
            }
        }
    }
    return 0;
}
