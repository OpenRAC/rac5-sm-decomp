/* LEVEL_03:0x1B7028 -- placement copy of LEVEL_01_1A3F20.c: runs two setup helpers, then stores the id looked up for a fixed hash into a global. */
extern int D_00221BAC;
extern void func_0EDFE0(int index);
extern int func_1282D0(unsigned int value);

void func_1B7028(void)
{
    func_0EDFE0(0x1F);
    func_0EDFE0(0x23);
    D_00221BAC = func_1282D0(0x39686F69u);
}
