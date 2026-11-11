/* LEVEL_01:0x1793A0 -- registers the local callback with the scheduler together with the module's current global. */
extern int D_00395EC8;
extern void func_179400(void);
extern void func_0994D8(void (*fn)(void), int a1, int a2, int a3);

void func_1793A0(void)
{
    func_0994D8(func_179400, 0, D_00395EC8, 0);
}
