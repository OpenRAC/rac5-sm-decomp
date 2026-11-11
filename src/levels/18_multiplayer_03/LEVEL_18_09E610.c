/* LEVEL_18:0x09E610 -- placement copy of LEVEL_16_09F600.c: forwards seven packed arguments to the shared worker, halving the 16-bit fields. */

void func_09E600();

void func_09E610(int a0, int a1, int a2, int a3, int t0, int t1, int t2)
{
    func_09E600((short)a0, (short)a1, t2, (short)a2, (short)a3, t2, (short)t0, (short)t1, t2);
}
