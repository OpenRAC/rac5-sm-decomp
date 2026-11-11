/* LEVEL_08:0x191FD0 -- placement copy of LEVEL_01_1793A0.c: registers the local callback with the scheduler together with the module's current global. */
extern int D_003E6C10;
extern void func_192030(void);
extern void func_0A1578(void (*fn)(void), int a1, int a2, int a3);

void func_191FD0(void)
{
    func_0A1578(func_192030, 0, D_003E6C10, 0);
}
