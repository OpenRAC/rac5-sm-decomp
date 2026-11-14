/* LEVEL_08:0x10A298 -- placement copy of LEVEL_02_104A00.c: runs one request through a temporary context with two local callbacks and returns the result of the final helper. */
extern void func_109BB8(void);
extern void func_109AD8(void);
extern void func_09E868(void *context, void *arg, void (*callback)(void), int size,
                        int flags, int limit, void (*finish)(void));
extern int func_09EA40(void *context);

int func_10A298(void *arg)
{
    char context[0x10];

    func_09E868(context, arg, func_109BB8, 0x14, 0, -1, func_109AD8);
    return func_09EA40(context);
}
