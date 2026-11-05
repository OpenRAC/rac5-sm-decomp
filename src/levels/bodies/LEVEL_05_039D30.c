extern int func_1DA670(void);

void func_039D30(char *record)
{
    *(int *)(record + 0x984) = func_1DA670();
}
