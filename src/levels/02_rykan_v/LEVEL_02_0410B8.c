extern int func_1FFF10(float input);

void func_0410B8(char *record, float f)
{
    *(int *)(record + 0x984) = func_1FFF10(f);
}
