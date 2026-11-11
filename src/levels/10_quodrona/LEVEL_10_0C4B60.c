extern char *func_0A74F8(int mode);
extern void func_131C58(int, void *, void *);
extern void func_131EF0(int, int);
extern char D_0021BCD8[];
extern char *D_001FCFAC;

void func_0C4B60(void)
{
    char *value = func_0A74F8(0);
    func_131C58(0, D_0021BCD8, value);
    func_131EF0(0, *(int *)(D_001FCFAC + 0x3c) + 1);
}
