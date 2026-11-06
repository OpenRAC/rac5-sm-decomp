extern int func_1B3008(void);
extern void func_1B2D58(char *);

void func_1B2748(char *record)
{
    if (func_1B3008() == 0) {
        func_1B2D58(record);
        **(int **)(record + 0x54) = 0;
    }
}
