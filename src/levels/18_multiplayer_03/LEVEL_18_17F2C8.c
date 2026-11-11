/* LEVEL_18:17F2C8 -- fires func_06F008 once the timer at 0x70 passes 2.5. */
void func_06F008(int a0, int a1);

void func_17F2C8(int a0)
{
    if (*(float *)(a0 + 0x70) > 2.5f) {
        func_06F008(a0, 1);
    }
}
