/* LEVEL_01:0x15F590 -- enables the object, then registers it with the global
   list unless the caller passed a non-zero last argument. */
extern char D_00393B18[];
extern void func_07C670(void *obj, int enable);
extern void func_1CD828(void *list, void *obj);

void func_15F590(void *obj, int a1, int a2, int skip)
{
    func_07C670(obj, 1);
    if (skip == 0)
        func_1CD828(D_00393B18, obj);
}
