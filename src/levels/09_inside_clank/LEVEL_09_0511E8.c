extern float D_00201A88[];
extern void func_067640(void *a0, int a1);
extern int func_0367F0(void *a0);
extern void func_193248(void *a0, int a1, int a2);

void func_0511E8(char *a0)
{
    if (*(unsigned short *)(a0 + 0x108) == 9)
        func_067640(a0, 0);
    if (func_0367F0(a0))
        func_193248(a0, 0, 1);
    if ((unsigned)(*(unsigned short *)(a0 + 0x102) - 0x28) >= 12) {
        float *d = (float *)(a0 + 0x304);

        d[0] = D_00201A88[0];
        d[1] = D_00201A88[1];
        d[2] = D_00201A88[2];
        d[3] = D_00201A88[3];
    }
}
