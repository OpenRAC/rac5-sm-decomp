extern void func_099458(char *, long long, int);

void func_195450(char *record, int other, int value)
{
    func_099458(record, other, 0);
    *(int *)(record + 0x20) = value;
}
