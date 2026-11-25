/* LEVEL_02:0x0253C8 -- placement copy of LEVEL_01_024A68.c: finds the first of three slots accepted by the slot check, marks that slot's flag byte in the matching record and returns 1 (0 when no slot qualifies). */
typedef unsigned int u32;

extern int func_025468(int first, int second, u32 index, int third);
extern int func_024F88(int x, int y);

int func_0253C8(int first, int second, int third)
{
    u32 index;

    for (index = 0; index < 3; index++) {
        if (func_025468(first, second, index, third)) {
            *(char *)(func_024F88(first, third) + index + 0x4C) = 1;
            return 1;
        }
    }
    return 0;
}
