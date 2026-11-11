/* LEVEL_09:0x1AC600 -- placement copy of LEVEL_01_1B9838.c: stores the lookup result for the constant key 0x2FD16502 in a global, then runs the shared handler for entry 14. */
extern int D_001F2B78;
extern int func_123000(unsigned int value);
extern void func_0EB628(int index);

void func_1AC600(void)
{
    D_001F2B78 = func_123000(0x2FD16502u);
    func_0EB628(14);
}
