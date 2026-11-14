/* LEVEL_03:0x0FD0E8 -- placement copy of LEVEL_02_104A00.c: runs one request through a temporary context with two local callbacks and returns the result of the final helper. */
extern void func_0FCA08(void);
extern void func_0FC928(void);
extern void func_096578(void *context, void *arg, void (*callback)(void), int size,
                        int flags, int limit, void (*finish)(void));
extern int func_096750(void *context);

int func_0FD0E8(void *arg)
{
    char context[0x10];

    func_096578(context, arg, func_0FCA08, 0x14, 0, -1, func_0FC928);
    return func_096750(context);
}
