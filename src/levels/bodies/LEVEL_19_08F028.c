extern char *func_08F060(char *data);
extern unsigned short *func_08F080(char *data, unsigned int type, int ordinal);

void func_08F028(char *first, long long second, int third)
{
    func_08F080(func_08F060(first), 3, third);
}
