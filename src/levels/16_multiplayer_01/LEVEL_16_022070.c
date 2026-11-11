/* LEVEL_16:0x022070 -- bounded table lookup that returns the matching entry address, or zero. */

struct Cell022070 {
    char pad00[4];
    int f04;
    char pad08[0x54 - 8];
};

extern struct Cell022070 D_0019F078[25][5];

char *func_022070(unsigned int a0, int a1)
{
    a1 = a1 + 1;
    if (a0 < 0x19 && a1 >= 0 && a1 < 6) {
        if (D_0019F078[a0][a1].f04 == 3) {
            return (char *)&D_0019F078[a0][a1];
        }
    }
    return 0;
}
