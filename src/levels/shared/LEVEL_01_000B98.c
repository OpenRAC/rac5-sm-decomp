/* LEVEL_01:0x000B98 -- calls the module's two-argument setter with slot 1 and the all-ones 16-bit value. */
extern void func_000B60(int a0, int a1);

void func_000B98(void)
{
    func_000B60(1, 0xFFFF);
}
