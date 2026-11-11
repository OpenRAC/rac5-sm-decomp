extern char *D_00203ED4;

void func_007B80(float f12)
{
    int i = *(int *)(D_00203ED4 + 0x1CB0);
    int n = *(int *)(D_00203ED4 + 0x1CB4);
    int end = i + n;

    for (; i < end; i++) {
        char *p = D_00203ED4 + 0x4B0 + (i & 0x7F) * 0x30;
        float *f = (float *)(p + 0x14);

        *f = *f + f12;
    }
}
