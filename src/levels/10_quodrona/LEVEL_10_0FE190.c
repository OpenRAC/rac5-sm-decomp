/* LEVEL_10:0x0FE190 -- placement copy of LEVEL_02_104A00.c: runs one request through a temporary context with two local callbacks and returns the result of the final helper. */
extern void func_0FDAB0(void);
extern void func_0FD9D0(void);
extern void func_096CB8(void *context, void *arg, void (*callback)(void), int size,
                        int flags, int limit, void (*finish)(void));
extern int func_096E90(void *context);

int func_0FE190(void *arg)
{
    char context[0x10];

    func_096CB8(context, arg, func_0FDAB0, 0x14, 0, -1, func_0FD9D0);
    return func_096E90(context);
}
