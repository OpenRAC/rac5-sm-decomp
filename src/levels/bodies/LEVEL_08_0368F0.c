extern void func_0366B8(void);

void func_0368F0(char *record)
{
    char *object = *(char **)(record + 0x58);
    if (*(int *)(object + 0x90) == 0) func_0366B8();
    object[0xb0] = 0;
    object[0xaf] = 1;
}
