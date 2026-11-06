extern void func_1264E0(void *);
extern void func_124E58(long long, void *, void *);

void func_068CF0(char *record, long long value)
{
    unsigned char buffer[48];
    func_1264E0(buffer);
    func_124E58(value, buffer, record + 0xe58);
}
