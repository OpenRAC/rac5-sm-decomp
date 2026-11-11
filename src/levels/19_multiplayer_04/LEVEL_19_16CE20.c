extern int func_16D6E0(void);
extern void func_16D428(char *);

void func_16CE20(char *record)
{
    if (func_16D6E0() == 0) {
        func_16D428(record);
        **(int **)(record + 0x54) = 0;
    }
}
