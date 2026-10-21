void func_0135B8(float *a0, float *a1, int a2)
{
    {
        float *d = a0 + 4;
        float *s = a1 + 4;
        d[0] = s[0];
        d[1] = s[1];
        d[2] = s[2];
        d[3] = s[3];
    }
    {
        float *d = a0 + 0;
        float *s = a1 + 0;
        d[0] = s[0];
        d[1] = s[1];
        d[2] = s[2];
        d[3] = s[3];
    }
    {
        float *d = a0 + 8;
        float *s = a1 + 8;
        d[0] = s[0];
        d[1] = s[1];
        d[2] = s[2];
        d[3] = s[3];
    }
    if (a2) {
        a0[12] = a1[12];
        a0[13] = a1[13];
        a0[14] = a1[14];
    }
}
