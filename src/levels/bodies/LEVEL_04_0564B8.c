extern float D_00231808[];
extern void func_06C4A8(void *a0, int a1);
extern int func_03B630(void *a0);
extern void func_1A95C8(void *a0, int a1, int a2);

void func_0564B8(char *a0)
{
    if (*(unsigned short *)(a0 + 0x108) == 9)
        func_06C4A8(a0, 0);
    if (func_03B630(a0))
        func_1A95C8(a0, 0, 1);
    if ((unsigned)(*(unsigned short *)(a0 + 0x102) - 0x28) >= 12) {
        float *d = (float *)(a0 + 0x304);

        d[0] = D_00231808[0];
        d[1] = D_00231808[1];
        d[2] = D_00231808[2];
        d[3] = D_00231808[3];
    }
}
