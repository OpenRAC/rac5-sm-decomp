/* LEVEL_04:0x161B90 -- placement copy of LEVEL_01_155428.c: clears a global and then calls the helper with zero. */
extern int D_00220B44;
extern void func_07FAD8(int value);

void func_161B90(void)
{
    D_00220B44 = 0;
    func_07FAD8(0);
}
