extern void func_09A5A0(char *, long long, int);

void func_193910(char *record, long long other, int value)
{
    func_09A5A0(record, other, 0);
    *(int *)(record + 0x20) = value;
}
