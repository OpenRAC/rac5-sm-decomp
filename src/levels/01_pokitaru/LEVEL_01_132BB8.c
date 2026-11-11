/* LEVEL_01:0x132BB8 -- placement copy of LEVEL_01_000B98.c: calls the module's two-argument setter with slot 1 and the all-ones 16-bit value. */
extern void func_132B80(int a0, int a1);

void func_132BB8(void)
{
    func_132B80(1, 0xFFFF);
}
