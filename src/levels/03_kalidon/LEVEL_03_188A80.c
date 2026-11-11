extern void func_097200(char *, long long, int);

void func_188A80(char *record, int other, int value)
{
    func_097200(record, other, 0);
    *(int *)(record + 0x20) = value;
}
