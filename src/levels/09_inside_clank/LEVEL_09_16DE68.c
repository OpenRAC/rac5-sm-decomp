/* LEVEL_09:0x16DE68 -- placement copy of LEVEL_03_17A2A8.c: runs the shared setup on a vector with the extra argument, then copies the vector to the output and reports success. */
extern void func_07EF68(float *v, int arg);

int func_16DE68(float *src, float *dst, int arg)
{
    func_07EF68(src, arg);
    dst[0] = src[0];
    dst[1] = src[1];
    dst[2] = src[2];
    return 1;
}
