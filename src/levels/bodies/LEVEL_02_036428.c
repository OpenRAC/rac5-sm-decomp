extern void func_0361F0(void);

void func_036428(char *record)
{
    char *object = *(char **)(record + 0x58);
    if (*(int *)(object + 0x90) == 0) func_0361F0();
    object[0xb0] = 0;
    object[0xaf] = 1;
}
