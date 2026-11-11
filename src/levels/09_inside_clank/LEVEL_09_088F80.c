/* LEVEL_09:0x088F80 -- placement copy of LEVEL_01_000B98.c: calls the module's two-argument setter with slot 1 and the all-ones 16-bit value. */
extern void func_088F48(int a0, int a1);

void func_088F80(void)
{
    func_088F48(1, 0xFFFF);
}
