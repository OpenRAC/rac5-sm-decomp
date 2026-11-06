extern int func_192EF0(void);
extern void func_192C40(char *);

void func_192630(char *record)
{
    if (func_192EF0() == 0) {
        func_192C40(record);
        **(int **)(record + 0x54) = 0;
    }
}
