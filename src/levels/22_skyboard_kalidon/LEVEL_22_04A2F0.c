extern float D_00175308[];
extern void func_060648(void *a0, int a1);
extern int func_02FF38(void *a0);
extern void func_132128(void *a0, int a1, int a2);

void func_04A2F0(char *a0)
{
    if (*(unsigned short *)(a0 + 0x108) == 9)
        func_060648(a0, 0);
    if (func_02FF38(a0))
        func_132128(a0, 0, 1);
    if ((unsigned)(*(unsigned short *)(a0 + 0x102) - 0x28) >= 12) {
        float *d = (float *)(a0 + 0x304);

        d[0] = D_00175308[0];
        d[1] = D_00175308[1];
        d[2] = D_00175308[2];
        d[3] = D_00175308[3];
    }
}
