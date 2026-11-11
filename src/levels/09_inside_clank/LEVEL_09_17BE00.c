extern void func_093D28(char *, long long, int);

void func_17BE00(char *record, int other, int value)
{
    func_093D28(record, other, 0);
    *(int *)(record + 0x20) = value;
}
