extern int func_1AF4C0(void);
extern void func_1AF210(char *);

void func_1AEBC8(char *record)
{
    if (func_1AF4C0() == 0) {
        func_1AF210(record);
        **(int **)(record + 0x54) = 0;
    }
}
