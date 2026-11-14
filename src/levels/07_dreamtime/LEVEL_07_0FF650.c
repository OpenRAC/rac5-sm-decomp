/* LEVEL_07:0x0FF650 -- placement copy of LEVEL_02_104A00.c: runs one request through a temporary context with two local callbacks and returns the result of the final helper. */
extern void func_0FEF70(void);
extern void func_0FEE90(void);
extern void func_0987D0(void *context, void *arg, void (*callback)(void), int size,
                        int flags, int limit, void (*finish)(void));
extern int func_0989A8(void *context);

int func_0FF650(void *arg)
{
    char context[0x10];

    func_0987D0(context, arg, func_0FEF70, 0x14, 0, -1, func_0FEE90);
    return func_0989A8(context);
}
