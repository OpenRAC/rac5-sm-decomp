extern char *func_08ECC0(char *data);
extern unsigned short *func_08ECE0(char *data, unsigned int type, int ordinal);

void func_08EC88(char *first, long long second, int third)
{
    func_08ECE0(func_08ECC0(first), 3, third);
}
