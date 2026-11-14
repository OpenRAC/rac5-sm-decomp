/* LEVEL_09:0x0CEAB0 -- placement copy of LEVEL_01_0D1800.c: clears two globals, then runs two helpers with fixed arguments. */
extern int D_001EE3DC;
extern int D_001EE3F0;
extern int func_0B32D0(int index);
extern void func_019C18(int a, int b);

void func_0CEAB0(void)
{
    D_001EE3F0 = 0;
    D_001EE3DC = 0;
    func_0B32D0(0);
    func_019C18(4, 0);
}
