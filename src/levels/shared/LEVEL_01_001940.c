void func_001940(float *a0, float x, float y)
{
    if (x < 0.0f) {
        if (x < -y) {
            a0[0] = a0[0] - y;
        } else {
            a0[0] = a0[2];
        }
    } else {
        if (y < x) {
            a0[0] = a0[0] + y;
        } else {
            a0[0] = a0[2];
        }
    }
}
