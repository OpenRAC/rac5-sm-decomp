/* LEVEL_05:0x1B5558 -- placement copy of LEVEL_01_1B9838.c: stores the lookup result for the constant key 0x2FD16502 in a global, then runs the shared handler for entry 14. */
extern int D_001F7F00;
extern int func_1259E0(unsigned int value);
extern void func_0EB888(int index);

void func_1B5558(void)
{
    D_001F7F00 = func_1259E0(0x2FD16502u);
    func_0EB888(14);
}
