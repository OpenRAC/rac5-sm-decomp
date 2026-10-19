extern void *D_00143EBC;

void func_002E98(float *delta)
{
    float *p = (float *)((char *)D_00143EBC + 0x1A4);

    p[0] += delta[0];
    p[1] += delta[1];
    p[2] += delta[2];
}
