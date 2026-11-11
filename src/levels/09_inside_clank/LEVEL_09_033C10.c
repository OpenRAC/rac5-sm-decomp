/* LEVEL_09:0x033C10 -- placement copy of LEVEL_01_000B98.c: calls the module's two-argument setter with slot 1 and the all-ones 16-bit value. */
extern void func_033BD8(int a0, int a1);

void func_033C10(void)
{
    func_033BD8(1, 0xFFFF);
}
