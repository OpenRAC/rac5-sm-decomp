/* LEVEL_09:0x1513D0 -- placement copy of LEVEL_01_15F590.c: enables the object, then registers it with the global
   list unless the caller passed a non-zero last argument. */
extern char D_0037B130[];
extern void func_079108(void *obj, int enable);
extern void func_1B3D48(void *list, void *obj);

void func_1513D0(void *obj, int a1, int a2, int skip)
{
    func_079108(obj, 1);
    if (skip == 0)
        func_1B3D48(D_0037B130, obj);
}
