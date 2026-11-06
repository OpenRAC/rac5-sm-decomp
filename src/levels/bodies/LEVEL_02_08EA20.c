extern float fabsf(float);

float func_0008EA20(int param_1, int param_2)
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
