/* LEVEL_01:0x1B9838 -- stores the lookup result for a constant key in a global, then runs the shared handler for entry 14. */
extern int D_00208E70;
extern int func_12A068(unsigned int value);
extern void func_0EF748(int index);

void func_1B9838(void)
{
    D_00208E70 = func_12A068(0x2FD16502u);
    func_0EF748(14);
}
