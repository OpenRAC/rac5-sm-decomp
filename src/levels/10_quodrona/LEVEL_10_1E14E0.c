/* LEVEL_10:1E14E0 -- advances the timer at 0x70 by the global step and fires
   func_07CCA0 once it passes five seconds. */
extern float D_0023AD2C;

int func_07CCA0(int a0, int a1);

int func_1E14E0(int a0)
{
    float v = *(float *)(a0 + 0x70) + D_0023AD2C;

    *(float *)(a0 + 0x70) = v;
    if (v > 5.0f) {
        func_07CCA0(a0, 1);
        return 1;
    }
    return 0;
}
