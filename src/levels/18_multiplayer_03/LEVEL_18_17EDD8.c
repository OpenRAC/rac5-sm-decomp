/* LEVEL_18:0x17EDD8 -- placement copy of LEVEL_01_1C4A70.c: stores the lookup result for the object's resource in its state byte. */
extern int func_0140D0(int a, int b);

void func_17EDD8(char *object)
{
    *(unsigned char *)(object + 0x45) = func_0140D0(*(int *)(object + 0x54), 0xE);
}
