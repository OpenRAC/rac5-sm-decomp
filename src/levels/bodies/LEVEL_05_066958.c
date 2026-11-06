extern void func_121F88(void *);
extern void func_120B20(long long, void *, void *);

void func_066958(char *record, long long value)
{
    unsigned char buffer[48];
    func_121F88(buffer);
    func_120B20(value, buffer, record + 0xe58);
}
