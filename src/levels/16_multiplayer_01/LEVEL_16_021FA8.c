/* LEVEL_16:0x021FA8 -- returns whether one table entry has tag 2 and a field of at least 3, otherwise 0. */
struct Cell {
    int w0;
    int w4;
    char pad8[0x3C - 0x08];
    unsigned int w3C;
    char pad40[0x54 - 0x40];
};

extern struct Cell D_0019F078[][5];

int func_021FA8(unsigned int a0, int a1)
{
    if (a0 < 0x19) {
        a1 = a1 + 1;
        if (a1 >= 0) {
            if (a1 < 6) {
                if (D_0019F078[a0][a1].w4 == 2) {
                    return D_0019F078[a0][a1].w3C >= 3;
                }
            }
        }
    }
    return 0;
}
