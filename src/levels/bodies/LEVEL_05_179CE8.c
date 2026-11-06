extern void func_094B08(char *, long long, int);

void func_179CE8(char *record, long long other, int value)
{
    func_094B08(record, other, 0);
    *(int *)(record + 0x20) = value;
}
