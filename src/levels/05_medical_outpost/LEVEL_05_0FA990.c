/* LEVEL_05:0x0FA990 -- placement copy of LEVEL_02_104A00.c: runs one request through a temporary context with two local callbacks and returns the result of the final helper. */
extern void func_0FA2B0(void);
extern void func_0FA1D0(void);
extern void func_094040(void *context, void *arg, void (*callback)(void), int size,
                        int flags, int limit, void (*finish)(void));
extern int func_094218(void *context);

int func_0FA990(void *arg)
{
    char context[0x10];

    func_094040(context, arg, func_0FA2B0, 0x14, 0, -1, func_0FA1D0);
    return func_094218(context);
}
