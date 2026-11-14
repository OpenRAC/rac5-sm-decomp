/* LEVEL_05:0x18D368 -- registers a callback for the given argument with key 1. */
extern int func_07E2E8(void *argument, void (*callback)(void *), unsigned int key);
extern void func_18D468(void *argument);

void func_18D368(void *argument)
{
    func_07E2E8(argument, func_18D468, 1);
}
