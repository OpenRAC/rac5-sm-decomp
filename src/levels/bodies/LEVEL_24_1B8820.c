extern char D_001B7F60[];
extern void func_08F748(char *, long long, char *, int, int, int, int);
extern void func_08F920(char *);

void func_1B8820(long long value)
{
    char scratch[16];
    func_08F748(scratch, value, D_001B7F60, 0x20, 0, 2, 0);
    func_08F920(scratch);
}
