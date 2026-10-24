/* LEVEL_07:06E750 -- relays the three integer arguments to func_06E780 with a
   zero and the float at 0x1F8 of the first argument. */
void func_06E780(int a0, int a1, int a2, int a3, float f);

void func_06E750(int a0, int a1, int a2, int a3)
{
    func_06E780(a1, a2, a3, 0, *(float *)(a0 + 0x1F8));
}
