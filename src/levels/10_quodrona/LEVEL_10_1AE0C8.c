/* LEVEL_10:0x1AE0C8 -- placement copy of LEVEL_01_1A3F20.c: runs two setup helpers, then stores the id looked up for a fixed hash into a global. */
extern int D_00211A2C;
extern void func_0EF088(int index);
extern int func_127EC8(unsigned int value);

void func_1AE0C8(void)
{
    func_0EF088(0x1F);
    func_0EF088(0x23);
    D_00211A2C = func_127EC8(0x39686F69u);
}
