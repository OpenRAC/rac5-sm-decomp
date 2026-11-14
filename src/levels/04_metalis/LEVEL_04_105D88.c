/* LEVEL_04:0x105D88 -- placement copy of LEVEL_02_104A00.c: runs one request through a temporary context with two local callbacks and returns the result of the final helper. */
extern void func_1056A8(void);
extern void func_1055C8(void);
extern void func_099A40(void *context, void *arg, void (*callback)(void), int size,
                        int flags, int limit, void (*finish)(void));
extern int func_099C18(void *context);

int func_105D88(void *arg)
{
    char context[0x10];

    func_099A40(context, arg, func_1056A8, 0x14, 0, -1, func_1055C8);
    return func_099C18(context);
}
