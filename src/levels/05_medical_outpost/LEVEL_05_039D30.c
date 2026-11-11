extern int func_1DA670(float input);

void func_039D30(char *record, float f)
{
    *(int *)(record + 0x984) = func_1DA670(f);
}
