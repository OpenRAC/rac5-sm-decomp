/* LEVEL_02:0x173808 -- placement copy of LEVEL_01_15F590.c: enables the object, then registers it with the global
   list unless the caller passed a non-zero last argument. */
extern char D_003AB800[];
extern void func_082F58(void *obj, int enable);
extern void func_1E2948(void *list, void *obj);

void func_173808(void *obj, int a1, int a2, int skip)
{
    func_082F58(obj, 1);
    if (skip == 0)
        func_1E2948(D_003AB800, obj);
}
