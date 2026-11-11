extern void func_01AC80(char *);
extern void func_16D3F0(long long, long long, char *);

void func_16E5B0(long long first, long long second)
{
    char scratch[16];
    func_01AC80(scratch);
    func_16D3F0(first, second, scratch);
}
