extern void func_033440(void);

void func_033678(char *record)
{
    char *object = *(char **)(record + 0x58);
    if (*(int *)(object + 0x90) == 0) func_033440();
    object[0xb0] = 0;
    object[0xaf] = 1;
}
