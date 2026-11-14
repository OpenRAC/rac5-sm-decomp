/* LEVEL_03:0x1D69D8 -- placement copy of LEVEL_01_1C4A70.c: stores the lookup result for the object's resource in its state byte. */
extern int func_014878(int a, int b);

void func_1D69D8(char *object)
{
    *(unsigned char *)(object + 0x45) = func_014878(*(int *)(object + 0x54), 0xE);
}
