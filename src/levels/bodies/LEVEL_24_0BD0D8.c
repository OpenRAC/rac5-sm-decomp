extern char *func_09FC58(int mode);
extern void func_1298D8(int, void *, void *);
extern void func_129B70(int, int);
extern char D_001E3AD8[];
extern char *D_001C4C2C;

void func_0BD0D8(void)
{
    char *value = func_09FC58(0);
    func_1298D8(0, D_001E3AD8, value);
    func_129B70(0, *(int *)(D_001C4C2C + 0x3c) + 1);
}
