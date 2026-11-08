extern char *func_080E70(char *data);
extern unsigned short *func_080E90(char *data, unsigned int type, int ordinal);

void func_080E38(char *first, long long second, int third)
{
    func_080E90(func_080E70(first), 3, third);
}
