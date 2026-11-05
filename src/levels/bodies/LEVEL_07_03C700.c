extern int func_1FF5F0(void);

void func_03C700(char *record)
{
    *(int *)(record + 0x984) = func_1FF5F0();
}
