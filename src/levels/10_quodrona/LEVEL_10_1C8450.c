/* LEVEL_10:0x1C8450 -- placement copy of LEVEL_01_1C4A70.c: stores the lookup result for the object's resource in its state byte. */
extern int func_014A68(int a, int b);

void func_1C8450(char *object)
{
    *(unsigned char *)(object + 0x45) = func_014A68(*(int *)(object + 0x54), 0xE);
}
