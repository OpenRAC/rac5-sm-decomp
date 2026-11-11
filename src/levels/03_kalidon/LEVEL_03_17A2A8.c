/* LEVEL_03:0x17A2A8 -- runs the shared setup on a vector with the extra argument, then copies the vector to the output and reports success. */
extern void func_0822C8(float *v, int arg);

int func_17A2A8(float *src, float *dst, int arg)
{
    func_0822C8(src, arg);
    dst[0] = src[0];
    dst[1] = src[1];
    dst[2] = src[2];
    return 1;
}
