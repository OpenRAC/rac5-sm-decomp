extern void func_08CE30(char *, long long, int);

void func_173258(char *record, int other, int value)
{
    func_08CE30(record, other, 0);
    *(int *)(record + 0x20) = value;
}
