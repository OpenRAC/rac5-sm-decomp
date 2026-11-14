/* LEVEL_03:0x16E730 -- stores the lookup result for a constant key in a global, then runs the shared handler for entry 23. */
extern int D_0021FF34;
extern int func_1282D0(unsigned int value);
extern void func_0EDFE0(int index);

void func_16E730(void)
{
    D_0021FF34 = func_1282D0(0xD0E658AFu);
    func_0EDFE0(23);
}
