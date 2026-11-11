extern int func_1CF9D0(void *record);
extern void func_1CF720(char *);

void func_1CF0D8(char *record)
{
    if (func_1CF9D0(record) == 0) {
        func_1CF720(record);
        **(int **)(record + 0x54) = 0;
    }
}
