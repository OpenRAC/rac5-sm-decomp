extern int func_1F42D0(void);

void func_03A838(char *record)
{
    *(int *)(record + 0x984) = func_1F42D0();
}
