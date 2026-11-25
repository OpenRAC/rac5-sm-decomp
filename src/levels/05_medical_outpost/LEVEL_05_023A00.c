/* LEVEL_05:0x023A00 -- placement copy of LEVEL_01_024A68.c: finds the first of three slots accepted by the slot check, marks that slot's flag byte in the matching record and returns 1 (0 when no slot qualifies). */
typedef unsigned int u32;

extern int func_023AA0(int first, int second, u32 index, int third);
extern int func_0235C0(int x, int y);

int func_023A00(int first, int second, int third)
{
    u32 index;

    for (index = 0; index < 3; index++) {
        if (func_023AA0(first, second, index, third)) {
            *(char *)(func_0235C0(first, third) + index + 0x4C) = 1;
            return 1;
        }
    }
    return 0;
}
