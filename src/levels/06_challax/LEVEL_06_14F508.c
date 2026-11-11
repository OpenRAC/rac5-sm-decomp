/* LEVEL_06:0x14F508 -- placement copy of LEVEL_01_15F590.c: enables the object, then registers it with the global
   list unless the caller passed a non-zero last argument. */
extern char D_00380740[];
extern void func_076268(void *obj, int enable);
extern void func_1B9C90(void *list, void *obj);

void func_14F508(void *obj, int a1, int a2, int skip)
{
    func_076268(obj, 1);
    if (skip == 0)
        func_1B9C90(D_00380740, obj);
}
