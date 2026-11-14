/* LEVEL_01:0x1C4A70 -- stores the lookup result for the object's resource in its state byte. */
extern int func_014978(int a, int b);

void func_1C4A70(char *object)
{
    *(unsigned char *)(object + 0x45) = func_014978(*(int *)(object + 0x54), 0xE);
}
