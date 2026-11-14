/* LEVEL_23:0x0F1738 -- placement copy of LEVEL_02_104A00.c: runs one request through a temporary context with two local callbacks and returns the result of the final helper. */
extern void func_0F1058(void);
extern void func_0F0F78(void);
extern void func_08C368(void *context, void *arg, void (*callback)(void), int size,
                        int flags, int limit, void (*finish)(void));
extern int func_08C540(void *context);

int func_0F1738(void *arg)
{
    char context[0x10];

    func_08C368(context, arg, func_0F1058, 0x14, 0, -1, func_0F0F78);
    return func_08C540(context);
}
