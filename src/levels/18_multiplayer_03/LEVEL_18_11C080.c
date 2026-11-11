/* LEVEL_18:0x11C080 -- placement copy of LEVEL_16_11CFE0.c: unless the check succeeds, resets the global object
   and runs its follow-up. */
extern void *D_0019C320;
extern int func_114388(void);
extern void func_096550(void *obj, int arg);
extern void func_11C0C8(void *obj);

void func_11C080(void)
{
    void *obj;

    if (func_114388() == 0) {
        obj = D_0019C320;
        func_096550(obj, 0);
        func_11C0C8(obj);
    }
}
