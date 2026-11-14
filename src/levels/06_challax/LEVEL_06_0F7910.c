/* LEVEL_06:0x0F7910 -- placement copy of LEVEL_02_104A00.c: runs one request through a temporary context with two local callbacks and returns the result of the final helper. */
extern void func_0F7230(void);
extern void func_0F7150(void);
extern void func_08F598(void *context, void *arg, void (*callback)(void), int size,
                        int flags, int limit, void (*finish)(void));
extern int func_08F770(void *context);

int func_0F7910(void *arg)
{
    char context[0x10];

    func_08F598(context, arg, func_0F7230, 0x14, 0, -1, func_0F7150);
    return func_08F770(context);
}
