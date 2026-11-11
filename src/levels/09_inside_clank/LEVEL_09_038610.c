extern int func_1D50E0(float input);

void func_038610(char *record, float f)
{
    *(int *)(record + 0x984) = func_1D50E0(f);
}
