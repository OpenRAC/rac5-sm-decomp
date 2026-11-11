/* LEVEL_02:0x18FA48 -- placement copy of LEVEL_01_1793A0.c: registers the local callback with the scheduler together with the module's current global. */
extern int D_003ADF28;
extern void func_18FAA8(void);
extern void func_09FBA8(void (*fn)(void), int a1, int a2, int a3);

void func_18FA48(void)
{
    func_09FBA8(func_18FAA8, 0, D_003ADF28, 0);
}
