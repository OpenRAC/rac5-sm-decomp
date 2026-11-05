extern int func_1EB278(void);

void func_03C150(char *record)
{
    *(int *)(record + 0x984) = func_1EB278();
}
