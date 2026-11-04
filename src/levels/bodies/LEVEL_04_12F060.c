/* LEVEL_04:0x12F060 -- normalises a four-component vector and re-emits it. */
extern double func_204500(float value);
extern double sqrt(double value);
extern void func_204210(double value);

void func_12F060(float *v)
{
    float sum = v[3] * v[3] + v[0] * v[0] + v[1] * v[1] + v[2] * v[2];
    double handle = sqrt(func_204500(sum));

    func_204210(handle);
}
