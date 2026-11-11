/* LEVEL_16:0x15AF88 -- placement copy of LEVEL_01_000B98.c: calls the module's two-argument setter with slot 1 and the all-ones 16-bit value. */
extern void func_15AF50(int a0, int a1);

void func_15AF88(void)
{
    func_15AF50(1, 0xFFFF);
}
