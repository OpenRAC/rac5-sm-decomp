extern int func_1EB278(float input);

void func_03C150(char *record, float f)
{
    *(int *)(record + 0x984) = func_1EB278(f);
}
