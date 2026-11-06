extern char D_00220BA0[];
extern void func_09E868(void *, void *, void *, int, int, int, void *);
extern void func_09EA40(void *);

void func_2235E8(void *first, void *second)
{
    char scratch[16];
    func_09E868(scratch, first, D_00220BA0, 56, 0, -1, second);
    func_09EA40(scratch);
}
