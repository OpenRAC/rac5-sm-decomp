/* LEVEL_16:0x11CFE0 -- unless the check succeeds, resets the global object
   and runs its follow-up. */
extern void *D_0019AEA0;
extern int func_1155E0(void);
extern void func_097540(void *obj, int arg);
extern void func_11D028(void *obj);

void func_11CFE0(void)
{
    void *obj;

    if (func_1155E0() == 0) {
        obj = D_0019AEA0;
        func_097540(obj, 0);
        func_11D028(obj);
    }
}
