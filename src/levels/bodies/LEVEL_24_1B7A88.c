extern char D_001B6D78[];
extern void func_08F748(char *, long long, char *, int, int, int, int);
extern void func_08F920(char *);

void func_1B7A88(long long value)
{
    char scratch[16];
    func_08F748(scratch, value, D_001B6D78, 0x28, 0, 6, 0);
    func_08F920(scratch);
}
