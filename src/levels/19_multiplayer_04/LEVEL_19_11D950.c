/* LEVEL_19:0x11D950 -- placement copy of LEVEL_16_11CFE0.c: unless the check succeeds, resets the global object
   and runs its follow-up. */
extern void *D_0019C020;
extern int func_115D58(void);
extern void func_096DD0(void *obj, int arg);
extern void func_11D998(void *obj);

void func_11D950(void)
{
    void *obj;

    if (func_115D58() == 0) {
        obj = D_0019C020;
        func_096DD0(obj, 0);
        func_11D998(obj);
    }
}
