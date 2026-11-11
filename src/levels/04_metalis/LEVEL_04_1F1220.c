/* LEVEL_04:0x1F1220 -- placement copy of LEVEL_01_000B98.c: calls the module's two-argument setter with slot 1 and the all-ones 16-bit value. */
extern void func_1F0FB0(int a0, int a1);

void func_1F1220(void)
{
    func_1F0FB0(1, 0xFFFF);
}
