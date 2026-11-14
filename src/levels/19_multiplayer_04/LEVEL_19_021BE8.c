/* LEVEL_19:0x021BE8 -- placement copy of LEVEL_16_021FA8.c: returns whether one table entry has tag 2 and a field of at least 3, otherwise 0. */
struct Cell {
    int w0;
    int w4;
    char pad8[0x3C - 0x08];
    unsigned int w3C;
    char pad40[0x54 - 0x40];
};

extern struct Cell D_001A01F8[][5];

int func_021BE8(unsigned int a0, int a1)
{
    if (a0 < 0x19) {
        a1 = a1 + 1;
        if (a1 >= 0) {
            if (a1 < 6) {
                if (D_001A01F8[a0][a1].w4 == 2) {
                    return D_001A01F8[a0][a1].w3C >= 3;
                }
            }
        }
    }
    return 0;
}
