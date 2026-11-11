extern char *func_113490(void);
extern int D_001B93F0[];

int func_113E40(void)
{
    char *record = func_113490();
    return D_001B93F0[*(int *)(record + 0xfc8)];
}
