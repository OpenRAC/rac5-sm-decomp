/* LEVEL_17:0x11CA10 -- placement copy of LEVEL_16_11CFE0.c: unless the check succeeds, resets the global object
   and runs its follow-up. */
extern void *D_0018E4A0;
extern int func_114D40(void);
extern void func_096A38(void *obj, int arg);
extern void func_11CA58(void *obj);

void func_11CA10(void)
{
    void *obj;

    if (func_114D40() == 0) {
        obj = D_0018E4A0;
        func_096A38(obj, 0);
        func_11CA58(obj);
    }
}
