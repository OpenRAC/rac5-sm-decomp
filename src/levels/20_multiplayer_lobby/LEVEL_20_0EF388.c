/* LEVEL_20:0x0EF388 -- placement copy of LEVEL_16_11CFE0.c: unless the check succeeds, resets the global object
   and runs its follow-up. */
extern void *D_000FD588;
extern int func_0E7EE0(void);
extern void func_081C38(void *obj, int arg);
extern void func_0EF3D0(void *obj);

void func_0EF388(void)
{
    void *obj;

    if (func_0E7EE0() == 0) {
        obj = D_000FD588;
        func_081C38(obj, 0);
        func_0EF3D0(obj);
    }
}
