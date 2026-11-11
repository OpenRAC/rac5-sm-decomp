/* LEVEL_02:1B12A8 -- takes x off the timer at 0x70 and re-arms through
   func_082F58 once it reaches zero. */
void func_082F58(int a0, int a1);

void func_1B12A8(int a0, float x)
{
    float t = *(float *)(a0 + 0x70) - x;

    *(float *)(a0 + 0x70) = t;
    if (t <= 0.0f) {
        func_082F58(a0, 1);
    }
}
