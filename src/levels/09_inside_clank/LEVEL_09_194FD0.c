/* LEVEL_09:0x194FD0 -- placement copy of LEVEL_01_000B98.c: calls the module's two-argument setter with slot 1 and the all-ones 16-bit value. */
extern void func_194F98(int a0, int a1);

void func_194FD0(void)
{
    func_194F98(1, 0xFFFF);
}
