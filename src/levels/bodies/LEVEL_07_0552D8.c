extern float D_0022CB88[];
extern void func_06B748(void *a0, int a1);
extern int func_03A518(void *a0);
extern void func_1AFBC0(void *a0, int a1, int a2);

void func_0552D8(char *a0)
{
    if (*(unsigned short *)(a0 + 0x108) == 9)
        func_06B748(a0, 0);
    if (func_03A518(a0))
        func_1AFBC0(a0, 0, 1);
    if ((unsigned)(*(unsigned short *)(a0 + 0x102) - 0x28) >= 12) {
        float *d = (float *)(a0 + 0x304);

        d[0] = D_0022CB88[0];
        d[1] = D_0022CB88[1];
        d[2] = D_0022CB88[2];
        d[3] = D_0022CB88[3];
    }
}
