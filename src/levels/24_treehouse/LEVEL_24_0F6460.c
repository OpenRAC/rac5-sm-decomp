/* LEVEL_24:0x0F6460 -- placement copy of LEVEL_02_104A00.c: runs one request through a temporary context with two local callbacks and returns the result of the final helper. */
extern void func_0F5D80(void);
extern void func_0F5CA0(void);
extern void func_08F748(void *context, void *arg, void (*callback)(void), int size,
                        int flags, int limit, void (*finish)(void));
extern int func_08F920(void *context);

int func_0F6460(void *arg)
{
    char context[0x10];

    func_08F748(context, arg, func_0F5D80, 0x14, 0, -1, func_0F5CA0);
    return func_08F920(context);
}
