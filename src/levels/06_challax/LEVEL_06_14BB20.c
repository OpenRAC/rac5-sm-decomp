/* LEVEL_06:0x14BB20 -- placement copy of LEVEL_01_155428.c: clears a global and then calls the helper with zero. */
extern int D_001F6004;
extern void func_076258(int value);

void func_14BB20(void)
{
    D_001F6004 = 0;
    func_076258(0);
}
