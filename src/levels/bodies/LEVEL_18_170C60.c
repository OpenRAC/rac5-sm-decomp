extern int func_171520(void);
extern void func_171268(char *);

void func_170C60(char *record)
{
    if (func_171520() == 0) {
        func_171268(record);
        **(int **)(record + 0x54) = 0;
    }
}
