extern char *func_0ACCF0(int mode);
extern void func_13A188(int, void *, void *);
extern void func_13A420(int, int);
extern char D_00227CD8[];
extern char *D_00208C2C;

void func_0CA120(void)
{
    char *value = func_0ACCF0(0);
    func_13A188(0, D_00227CD8, value);
    func_13A420(0, *(int *)(D_00208C2C + 0x3c) + 1);
}
