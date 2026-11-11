/* LEVEL_04:0x168C20 -- placement copy of LEVEL_01_15F590.c: enables the object, then registers it with the global
   list unless the caller passed a non-zero last argument. */
extern char D_003AE298[];
extern void func_07FAE8(void *obj, int enable);
extern void func_1E1058(void *list, void *obj);

void func_168C20(void *obj, int a1, int a2, int skip)
{
    func_07FAE8(obj, 1);
    if (skip == 0)
        func_1E1058(D_003AE298, obj);
}
