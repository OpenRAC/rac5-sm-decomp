/* LEVEL_02:0x1DB700 -- placement copy of LEVEL_01_1C4A70.c: stores the lookup result for the object's resource in its state byte. */
extern int func_015540(int a, int b);

void func_1DB700(char *object)
{
    *(unsigned char *)(object + 0x45) = func_015540(*(int *)(object + 0x54), 0xE);
}
