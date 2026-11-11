/* LEVEL_10:0x17C860 -- placement copy of LEVEL_03_17A2A8.c: runs the shared setup on a vector with the extra argument, then copies the vector to the output and reports success. */
extern void func_082B48(float *v, int arg);

int func_17C860(float *src, float *dst, int arg)
{
    func_082B48(src, arg);
    dst[0] = src[0];
    dst[1] = src[1];
    dst[2] = src[2];
    return 1;
}
