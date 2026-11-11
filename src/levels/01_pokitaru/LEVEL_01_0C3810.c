extern char *func_0A63E0(int mode);
extern void func_133DD8(int, void *, void *);
extern int func_134070(int, int);
extern char D_00212D58[];
extern char *D_001F3FAC;

void func_0C3810(void)
{
    char *value = func_0A63E0(0);
    func_133DD8(0, D_00212D58, value);
    func_134070(0, *(int *)(D_001F3FAC + 0x3c) + 1);
}
