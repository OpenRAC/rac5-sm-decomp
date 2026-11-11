/* LEVEL_05:0x1535B8 -- placement copy of LEVEL_01_15F590.c: enables the object, then registers it with the global
   list unless the caller passed a non-zero last argument. */
extern char D_0037F858[];
extern void func_079CF8(void *obj, int enable);
extern void func_1BCC38(void *list, void *obj);

void func_1535B8(void *obj, int a1, int a2, int skip)
{
    func_079CF8(obj, 1);
    if (skip == 0)
        func_1BCC38(D_0037F858, obj);
}
