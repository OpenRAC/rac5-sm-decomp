extern int D_0021E140[];

void func_028500(void)
{
    int *entry = D_0021E140;
    int *end = D_0021E140 + 192;
    for (; entry < end; entry += 3) {
        *entry = 0;
        entry[2] = 15;
    }
}
