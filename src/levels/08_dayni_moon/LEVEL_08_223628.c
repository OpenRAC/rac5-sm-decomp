extern char D_00221B18[];
extern void func_09E868(void *, void *, void *, int, int, int, void *);
extern void func_09EA40(void *);

void func_223628(void *first, void *second)
{
    char scratch[16];
    func_09E868(scratch, first, D_00221B18, 72, 0, -1, second);
    func_09EA40(scratch);
}
