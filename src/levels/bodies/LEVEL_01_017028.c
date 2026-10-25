void func_017028(float *out, float a, float b)
{
    float t;

    if (b > 0.0f) {
        *out = 1.0f;
        if (a > 1.0f)
            a = 1.0f;
        if (a < b) {
            *out = a / b;
            return;
        }
        t = 1.0f - a;
        if (t < b)
            *out = t / b;
    } else {
        *out = 1.0f;
    }
}
