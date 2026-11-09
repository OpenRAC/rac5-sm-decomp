/* LEVEL_20:0x01ED70 -- placement copy of LEVEL_16_022070.c: bounded table lookup that returns the matching entry address, or zero. */

struct Cell022070 {
    char pad00[4];
    int f04;
    char pad08[0x54 - 8];
};

extern struct Cell022070 D_00101758[25][5];

char *func_01ED70(unsigned int a0, int a1)
{
    a1 = a1 + 1;
    if (a0 < 0x19 && a1 >= 0 && a1 < 6) {
        if (D_00101758[a0][a1].f04 == 3) {
            return (char *)&D_00101758[a0][a1];
        }
    }
    return 0;
}
