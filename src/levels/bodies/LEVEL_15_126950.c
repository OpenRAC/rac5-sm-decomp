/* LEVEL_15:0x126950 -- runs one request through a temporary context with two
   local callbacks. */
extern void func_126280(void);
extern void func_125EF0(void);
extern void func_07A808(void *context, void *arg, void (*callback)(void), int size,
                        int flags, int limit, void (*finish)(void));
extern void func_07A9E0(void *context);

void func_126950(void *arg)
{
    char context[0x10];

    func_07A808(context, arg, func_126280, 0x38, 0, -1, func_125EF0);
    func_07A9E0(context);
}
