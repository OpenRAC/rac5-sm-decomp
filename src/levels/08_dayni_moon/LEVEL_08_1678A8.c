/* LEVEL_08:0x1678A8 -- placement copy of LEVEL_01_155428.c: clears a global and then calls the helper with zero. */
extern int D_002505EC;
extern void func_0845E8(int value);

void func_1678A8(void)
{
    D_002505EC = 0;
    func_0845E8(0);
}
