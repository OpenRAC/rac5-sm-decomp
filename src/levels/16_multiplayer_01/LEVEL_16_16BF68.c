extern int func_16C828(void);
extern void func_16C570(char *);

void func_16BF68(char *record)
{
    if (func_16C828() == 0) {
        func_16C570(record);
        **(int **)(record + 0x54) = 0;
    }
}
