/* LEVEL_01:0x0FE850 -- placement copy of LEVEL_15_126950.c: runs one request through a temporary context with two
   local callbacks and returns the result of the final helper. */
extern void func_0FE170(void);
extern void func_0FE090(void);
extern void func_096948(void *context, void *arg, void (*callback)(void), int size,
                        int flags, int limit, void (*finish)(void));
extern int func_096B20(void *context);

int func_0FE850(void *arg)
{
    char context[0x10];

    func_096948(context, arg, func_0FE170, 0x14, 0, -1, func_0FE090);
    return func_096B20(context);
}
