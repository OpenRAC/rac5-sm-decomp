/* LEVEL_09:0x14E408 -- placement copy of LEVEL_01_155428.c: clears a global and then calls the helper with zero. */
extern int D_001F0F04;
extern void func_0790F8(int value);

void func_14E408(void)
{
    D_001F0F04 = 0;
    func_0790F8(0);
}
