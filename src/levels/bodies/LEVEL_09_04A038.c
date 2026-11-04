extern int func_067780(void *a0);
extern void func_067640(void *a0, int a1);

void func_04A038(char *a0, float *a1)
{
    float *d;
    float *e;
    float *q;

    if (func_067780(a0))
        func_067640(a0, 0);
    *(short *)(a0 + 0x100) = 0x4B;
    *(short *)(a0 + 0x102) = 0x4B;
    d = (float *)(a0 + 0xD88);
    d[0] = a1[0];
    d[1] = a1[1];
    d[2] = a1[2];
    e = (float *)(a0 + 0xDC8);
    q = (float *)(*(char **)(a0 + 0x59C) + 0x30);
    e[0] = q[0];
    e[1] = q[1];
    e[2] = q[2];
}
