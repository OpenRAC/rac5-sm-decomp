/* LEVEL_08:0x1706A8 -- placement copy of LEVEL_01_15F590.c: enables the object, then registers it with the global
   list unless the caller passed a non-zero last argument. */
extern char D_003E2E40[];
extern void func_0845F8(void *obj, int enable);
extern void func_208630(void *list, void *obj);

void func_1706A8(void *obj, int a1, int a2, int skip)
{
    func_0845F8(obj, 1);
    if (skip == 0)
        func_208630(D_003E2E40, obj);
}
