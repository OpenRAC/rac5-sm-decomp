/* LEVEL_10:0x088D38 -- placement copy of LEVEL_01_000B98.c: calls the module's two-argument setter with slot 1 and the all-ones 16-bit value. */
extern void func_088D00(int a0, int a1);

void func_088D38(void)
{
    func_088D00(1, 0xFFFF);
}
