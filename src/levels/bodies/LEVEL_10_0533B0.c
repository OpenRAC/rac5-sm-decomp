extern float D_00220E08[];
extern void func_069870(void *a0, int a1);
extern int func_0389F8(void *a0);
extern void func_1A7B20(void *a0, int a1, int a2);

void func_0533B0(char *a0)
{
    if (*(unsigned short *)(a0 + 0x108) == 9)
        func_069870(a0, 0);
    if (func_0389F8(a0))
        func_1A7B20(a0, 0, 1);
    if ((unsigned)(*(unsigned short *)(a0 + 0x102) - 0x28) >= 12) {
        float *d = (float *)(a0 + 0x304);

        d[0] = D_00220E08[0];
        d[1] = D_00220E08[1];
        d[2] = D_00220E08[2];
        d[3] = D_00220E08[3];
    }
}
