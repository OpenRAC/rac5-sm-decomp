/* LEVEL_04:0x0246E8 -- placement copy of LEVEL_01_024A68.c: finds the first of three slots accepted by the slot check, marks that slot's flag byte in the matching record and returns 1 (0 when no slot qualifies). */
typedef unsigned int u32;

extern int func_024788(int first, int second, u32 index, int third);
extern int func_0242A8(int x, int y);

int func_0246E8(int first, int second, int third)
{
    u32 index;

    for (index = 0; index < 3; index++) {
        if (func_024788(first, second, index, third)) {
            *(char *)(func_0242A8(first, third) + index + 0x4C) = 1;
            return 1;
        }
    }
    return 0;
}
