/* LEVEL_01:0x155718 -- runs func_154BE0, then func_080C98 with 0 and the address of the handler at 0x1556F8. */
extern void func_154BE0(void);
extern void func_080C98(int first, int second);
extern void func_1556F8(void);

void func_155718(void)
{
    func_154BE0();
    func_080C98(0, (int)func_1556F8);
}
