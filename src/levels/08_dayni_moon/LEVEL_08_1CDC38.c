/* LEVEL_08:1CDC38 -- takes x off the timer at 0x70 and re-arms through
   func_0845F8 once it reaches zero. */
void func_0845F8(int a0, int a1);

void func_1CDC38(int a0, float x)
{
    float t = *(float *)(a0 + 0x70) - x;

    *(float *)(a0 + 0x70) = t;
    if (t <= 0.0f) {
        func_0845F8(a0, 1);
    }
}
