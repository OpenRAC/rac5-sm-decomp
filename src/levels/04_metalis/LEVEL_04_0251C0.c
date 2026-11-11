extern char D_002263E0[];
extern int D_00234170;
extern int sprintf(char *, const char *, ...);
extern void func_025170(char *);

void func_0251C0(int value)
{
    char scratch[256];
    sprintf(scratch, D_002263E0, D_00234170, (signed char)(value + 0x41));
    func_025170(scratch);
}
