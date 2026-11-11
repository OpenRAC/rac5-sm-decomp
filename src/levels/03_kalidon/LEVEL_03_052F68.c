extern float D_00230D88[];
extern void func_0693C8(void *a0, int a1);
extern int func_038228(void *a0);
extern void func_1B0B20(void *a0, int a1, int a2);

void func_052F68(char *a0)
{
    if (*(unsigned short *)(a0 + 0x108) == 9)
        func_0693C8(a0, 0);
    if (func_038228(a0))
        func_1B0B20(a0, 0, 1);
    if ((unsigned)(*(unsigned short *)(a0 + 0x102) - 0x28) >= 12) {
        float *d = (float *)(a0 + 0x304);

        d[0] = D_00230D88[0];
        d[1] = D_00230D88[1];
        d[2] = D_00230D88[2];
        d[3] = D_00230D88[3];
    }
}
