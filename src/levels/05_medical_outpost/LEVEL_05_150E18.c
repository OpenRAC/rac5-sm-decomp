/* LEVEL_05:0x150E18 -- placement copy of LEVEL_01_155428.c: clears a global and then calls the helper with zero. */
extern int D_001F6484;
extern void func_079CE8(int value);

void func_150E18(void)
{
    D_001F6484 = 0;
    func_079CE8(0);
}
