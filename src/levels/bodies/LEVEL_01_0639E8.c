void func_0639E8(int *color, float *phase, float delta)
{
    float adjusted;
    if (*phase < 1.0f)
        adjusted = *phase;
    else
        adjusted = 2.0f - *phase;
    *color = 0xff000000 | ((int)(adjusted * 88.0f + 112.0f) << 8);
    *phase = *phase + delta;
    if (*phase >= 2.0f)
        *phase = *phase - 2.0f;
}
