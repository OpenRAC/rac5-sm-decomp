/* LEVEL_01:0x024A68 -- finds the first of three slots accepted by the slot check, marks that slot's flag byte in the matching record and returns 1 (0 when no slot qualifies). */
typedef unsigned int u32;

extern int func_024B08(int first, int second, u32 index, int third);
extern int func_024628(int x, int y);

int func_024A68(int first, int second, int third)
{
    u32 index;

    for (index = 0; index < 3; index++) {
        if (func_024B08(first, second, index, third)) {
            *(char *)(func_024628(first, third) + index + 0x4C) = 1;
            return 1;
        }
    }
    return 0;
}
