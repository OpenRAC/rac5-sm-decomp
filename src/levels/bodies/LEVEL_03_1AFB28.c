extern int func_1B0420(void);
extern void func_1B0170(char *);

void func_1AFB28(char *record)
{
    if (func_1B0420() == 0) {
        func_1B0170(record);
        **(int **)(record + 0x54) = 0;
    }
}
