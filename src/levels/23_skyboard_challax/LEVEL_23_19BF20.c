/* LEVEL_23:0x19BF20 -- placement copy of LEVEL_01_1C4A70.c: stores the lookup result for the object's resource in its state byte. */
extern int func_013D50(int a, int b);

void func_19BF20(char *object)
{
    *(unsigned char *)(object + 0x45) = func_013D50(*(int *)(object + 0x54), 0xE);
}
