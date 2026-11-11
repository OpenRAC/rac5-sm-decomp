/* LEVEL_10:0x157D80 -- placement copy of LEVEL_01_15F590.c: enables the object, then registers it with the global
   list unless the caller passed a non-zero last argument. */
extern char D_0039CDC0[];
extern void func_07CCA0(void *obj, int enable);
extern void func_1D1AD0(void *list, void *obj);

void func_157D80(void *obj, int a1, int a2, int skip)
{
    func_07CCA0(obj, 1);
    if (skip == 0)
        func_1D1AD0(D_0039CDC0, obj);
}
