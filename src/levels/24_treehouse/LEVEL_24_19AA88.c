/* LEVEL_24:0x19AA88 -- placement copy of LEVEL_01_1C4A70.c: stores the lookup result for the object's resource in its state byte. */
extern int func_013BF0(int a, int b);

void func_19AA88(char *object)
{
    *(unsigned char *)(object + 0x45) = func_013BF0(*(int *)(object + 0x54), 0xE);
}
