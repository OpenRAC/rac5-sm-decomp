/* LEVEL_04:0x12F060 -- normalises a four-component vector and re-emits it. */
extern int func_204500(float sum);
extern int func_000000(int handle);
extern void func_204210(int handle);

void func_12F060(float *v)
{
    float sum = v[3] * v[3] + v[0] * v[0] + v[1] * v[1] + v[2] * v[2];
    int handle = func_000000(func_204500(sum));

    func_204210(handle);
}
