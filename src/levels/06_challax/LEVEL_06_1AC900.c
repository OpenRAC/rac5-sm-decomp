/* LEVEL_06:0x1AC900 -- placement copy of LEVEL_01_1B9838.c: stores the lookup result for the constant key 0x2FD16502 in a global, then runs the shared handler for entry 14. */
extern int D_001F7E08;
extern int func_1206C0(unsigned int value);
extern void func_0E8808(int index);

void func_1AC900(void)
{
    D_001F7E08 = func_1206C0(0x2FD16502u);
    func_0E8808(14);
}
