/* LEVEL_24:0x048540 -- placement copy of LEVEL_01_000B98.c: calls the module's two-argument setter with slot 1 and the all-ones 16-bit value. */
extern void func_048508(int a0, int a1);

void func_048540(void)
{
    func_048508(1, 0xFFFF);
}
