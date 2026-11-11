/* LEVEL_19:0x021CB0 -- placement copy of LEVEL_16_022070.c: bounded table lookup that returns the matching entry address, or zero. */

struct Cell022070 {
    char pad00[4];
    int f04;
    char pad08[0x54 - 8];
};

extern struct Cell022070 D_001A01F8[25][5];

char *func_021CB0(unsigned int a0, int a1)
{
    a1 = a1 + 1;
    if (a0 < 0x19 && a1 >= 0 && a1 < 6) {
        if (D_001A01F8[a0][a1].f04 == 3) {
            return (char *)&D_001A01F8[a0][a1];
        }
    }
    return 0;
}
