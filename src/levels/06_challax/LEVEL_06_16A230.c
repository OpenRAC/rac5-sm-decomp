/* LEVEL_06:0x16A230 -- placement copy of LEVEL_03_17A2A8.c: runs the shared setup on a vector with the extra argument, then copies the vector to the output and reports success. */
extern void func_07B5F8(float *v, int arg);

int func_16A230(float *src, float *dst, int arg)
{
    func_07B5F8(src, arg);
    dst[0] = src[0];
    dst[1] = src[1];
    dst[2] = src[2];
    return 1;
}
