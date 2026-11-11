/* LEVEL_08:0x1EC238 -- placement copy of LEVEL_01_000B98.c: calls the module's two-argument setter with slot 1 and the all-ones 16-bit value. */
extern void func_1EC200(int a0, int a1);

void func_1EC238(void)
{
    func_1EC200(1, 0xFFFF);
}
