/* LEVEL_23:067078 -- relays the three integer arguments to func_0670A8 with a
   zero and the float at 0x1F8 of the first argument. */
void func_0670A8(int a0, int a1, int a2, int a3, float f);

void func_067078(int a0, int a1, int a2, int a3)
{
    func_0670A8(a1, a2, a3, 0, *(float *)(a0 + 0x1F8));
}
