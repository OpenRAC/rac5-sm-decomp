/* LEVEL_09:0x0FA730 -- placement copy of LEVEL_02_104A00.c: runs one request through a temporary context with two local callbacks and returns the result of the final helper. */
extern void func_0FA050(void);
extern void func_0F9F70(void);
extern void func_0930A0(void *context, void *arg, void (*callback)(void), int size,
                        int flags, int limit, void (*finish)(void));
extern int func_093278(void *context);

int func_0FA730(void *arg)
{
    char context[0x10];

    func_0930A0(context, arg, func_0FA050, 0x14, 0, -1, func_0F9F70);
    return func_093278(context);
}
