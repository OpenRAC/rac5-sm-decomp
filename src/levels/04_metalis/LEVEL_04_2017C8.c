extern void func_09A5A0(char *, long long, int);

void func_2017C8(char *record, long long other, int value)
{
    func_09A5A0(record, other, 1);
    *(int *)(record + 0x14) = value;
}
