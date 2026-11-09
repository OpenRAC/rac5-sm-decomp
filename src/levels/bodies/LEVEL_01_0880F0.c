/* LEVEL_01:0x0880F0 -- placement copy of LEVEL_02_08EA20.c. */
extern float fabsf(float);

float func_000880F0(int param_1, int param_2)
{
    float t = (float)param_1 / 255.0f;
    float offset = (float)param_2 * 0.0078125f;
    float value = t + t;

    value -= 1.0f;
    if (fabsf(value) <= offset)
        return 0.0f;
    if (0.0f < value)
        value -= offset;
    else
        value += offset;
    return value / (1.0f - offset);
}
