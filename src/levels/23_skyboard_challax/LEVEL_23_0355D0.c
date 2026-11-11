extern int func_1BE6B8(float input);

void func_0355D0(char *record, float f)
{
    *(int *)(record + 0x984) = func_1BE6B8(f);
}
