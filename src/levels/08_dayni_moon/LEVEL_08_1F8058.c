/* LEVEL_08:0x1F8058 -- placement copy of LEVEL_01_1C4A70.c: stores the lookup result for the object's resource in its state byte. */
extern int func_0152F0(int a, int b);

void func_1F8058(char *object)
{
    *(unsigned char *)(object + 0x45) = func_0152F0(*(int *)(object + 0x54), 0xE);
}
