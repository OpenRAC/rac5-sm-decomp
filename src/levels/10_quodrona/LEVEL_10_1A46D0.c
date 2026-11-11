extern int func_1A4FC8(void *record);
extern void func_1A4D18(char *);

void func_1A46D0(char *record)
{
    if (func_1A4FC8(record) == 0) {
        func_1A4D18(record);
        **(int **)(record + 0x54) = 0;
    }
}
