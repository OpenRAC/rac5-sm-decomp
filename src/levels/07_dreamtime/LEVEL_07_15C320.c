/* LEVEL_07:0x15C320 -- placement copy of LEVEL_01_15F590.c: enables the object, then registers it with the global
   list unless the caller passed a non-zero last argument. */
extern char D_003A92F0[];
extern void func_07E7F0(void *obj, int enable);
extern void func_1D9E08(void *list, void *obj);

void func_15C320(void *obj, int a1, int a2, int skip)
{
    func_07E7F0(obj, 1);
    if (skip == 0)
        func_1D9E08(D_003A92F0, obj);
}
