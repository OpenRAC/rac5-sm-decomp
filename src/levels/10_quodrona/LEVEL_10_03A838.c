extern int func_1F42D0(float input);

void func_03A838(char *record, float f)
{
    *(int *)(record + 0x984) = func_1F42D0(f);
}
