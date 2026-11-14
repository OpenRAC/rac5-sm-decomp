/* LEVEL_22:0x0E1E40 -- placement copy of LEVEL_02_104A00.c: runs one request through a temporary context with two local callbacks and returns the result of the final helper. */
extern void func_0E1760(void);
extern void func_0E1680(void);
extern void func_087718(void *context, void *arg, void (*callback)(void), int size,
                        int flags, int limit, void (*finish)(void));
extern int func_0878F0(void *context);

int func_0E1E40(void *arg)
{
    char context[0x10];

    func_087718(context, arg, func_0E1760, 0x14, 0, -1, func_0E1680);
    return func_0878F0(context);
}
