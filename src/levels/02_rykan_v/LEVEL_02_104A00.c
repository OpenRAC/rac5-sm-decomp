/* LEVEL_02:0x104A00 -- runs one request through a temporary context with two local callbacks and returns the result of the final helper. */
extern void func_104320(void);
extern void func_104240(void);
extern void func_09D018(void *context, void *arg, void (*callback)(void), int size,
                        int flags, int limit, void (*finish)(void));
extern int func_09D1F0(void *context);

int func_104A00(void *arg)
{
    char context[0x10];

    func_09D018(context, arg, func_104320, 0x14, 0, -1, func_104240);
    return func_09D1F0(context);
}
