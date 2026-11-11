/* LEVEL_07:0x1F6CC8 -- derives scaled deltas and a packed byte field from an input record. */

void func_1F6CC8(unsigned int *o)
{
    float *f = (float *)o;
    unsigned int n;
    unsigned int c;

    f[10] = (f[1] - f[0]) * 4.6566128730773926e-10f;
    f[11] = (f[3] - f[2]) * 4.6566128730773926e-10f;
    n = o[5];
    o[12] = n & 0x00FFFFFFu;
    c = (n >> 24) & 0xFFu;
    f[13] = (float)c;
    f[14] = (f[7] - f[6]) * 4.6566128730773926e-10f;
    f[15] = (f[9] - f[8]) * 4.6566128730773926e-10f;
}
