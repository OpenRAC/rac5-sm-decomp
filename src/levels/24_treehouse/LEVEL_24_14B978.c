/* LEVEL_24:0x14B978 -- placement copy of LEVEL_01_155428.c: clears a global and then calls the helper with zero. */
extern int D_001D83AC;
extern void func_076D58(int value);

void func_14B978(void)
{
    D_001D83AC = 0;
    func_076D58(0);
}
