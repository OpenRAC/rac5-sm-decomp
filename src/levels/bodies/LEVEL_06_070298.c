extern int func_070C30(void);
extern void func_070C80(int);

void func_070298(void)
{
    int value = func_070C30();
    if (value != 0)
        func_070C80(value);
}
