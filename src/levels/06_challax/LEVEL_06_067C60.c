/* LEVEL_06:067C60 -- the time at 0xF60 minus the global D_001FCCC8. */
extern float D_001FCCC8;

float func_067C60(int a0)
{
    return *(float *)(a0 + 0xF60) - D_001FCCC8;
}
