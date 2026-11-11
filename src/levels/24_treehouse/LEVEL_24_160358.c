/* LEVEL_24:0x160358 -- placement copy of LEVEL_03_17A2A8.c: runs the shared setup on a vector with the extra argument, then copies the vector to the output and reports success. */
extern void func_07C0F8(float *v, int arg);

int func_160358(float *src, float *dst, int arg)
{
    func_07C0F8(src, arg);
    dst[0] = src[0];
    dst[1] = src[1];
    dst[2] = src[2];
    return 1;
}
