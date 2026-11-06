extern void func_094B08(char *, long long, int);

void func_1D7A00(char *record, long long other, int value)
{
    func_094B08(record, other, 1);
    *(int *)(record + 0x14) = value;
}
