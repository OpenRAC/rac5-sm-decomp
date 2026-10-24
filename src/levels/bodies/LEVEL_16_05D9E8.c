/* LEVEL_16:05D9E8 -- the time at 0xF60 minus the global D_001C2E28. */
extern float D_001C2E28;

float func_05D9E8(int a0)
{
    return *(float *)(a0 + 0xF60) - D_001C2E28;
}
