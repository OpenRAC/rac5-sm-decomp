extern int func_1B0420(void *record);
extern void func_1B0170(char *);

void func_1AFB28(char *record)
{
    if (func_1B0420(record) == 0) {
        func_1B0170(record);
        **(int **)(record + 0x54) = 0;
    }
}
