/* LEVEL_03:0x158A70 -- placement copy of LEVEL_01_15F590.c: enables the object, then registers it with the global
   list unless the caller passed a non-zero last argument. */
extern char D_003AE8B0[];
extern void func_07C468(void *obj, int enable);
extern void func_1DE448(void *list, void *obj);

void func_158A70(void *obj, int a1, int a2, int skip)
{
    func_07C468(obj, 1);
    if (skip == 0)
        func_1DE448(D_003AE8B0, obj);
}
