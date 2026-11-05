extern int func_1FFF10(void);

void func_0410B8(char *record)
{
    *(int *)(record + 0x984) = func_1FFF10();
}
