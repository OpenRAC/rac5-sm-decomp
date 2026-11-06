extern void func_001BF0(char *);
extern void func_1216B0(long long, long long, char *);

void func_001D70(long long first, long long second)
{
    char scratch[16];
    func_001BF0(scratch);
    func_1216B0(first, second, scratch);
}
