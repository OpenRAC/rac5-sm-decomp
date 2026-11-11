void func_16CC28(char *a0, int a1, float *a2)
{
    char *v0 = *(char **)(a0 + 0x58);
    float *v1;
    v0 = v0 + a1 * 28;
    v1 = *(float **)(v0 + 4);
    a2[0] = v1[0];
    a2[1] = v1[1];
}
