/* LEVEL_16:0x09F600 -- forwards seven packed arguments to the shared worker, halving the 16-bit fields. */

void func_09F5F0();

void func_09F600(int a0, int a1, int a2, int a3, int t0, int t1, int t2)
{
    func_09F5F0((short)a0, (short)a1, t2, (short)a2, (short)a3, t2, (short)t0, (short)t1, t2);
}
