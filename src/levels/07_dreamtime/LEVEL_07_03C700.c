extern int func_1FF5F0(float input);

void func_03C700(char *record, float f)
{
    *(int *)(record + 0x984) = func_1FF5F0(f);
}
