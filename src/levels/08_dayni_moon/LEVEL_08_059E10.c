extern float D_00261B08[];
extern void func_070288(void *a0, int a1);
extern int func_03F0B8(void *a0);
extern void func_1D00D0(void *a0, int a1, int a2);

void func_059E10(char *a0)
{
    if (*(unsigned short *)(a0 + 0x108) == 9)
        func_070288(a0, 0);
    if (func_03F0B8(a0))
        func_1D00D0(a0, 0, 1);
    if ((unsigned)(*(unsigned short *)(a0 + 0x102) - 0x28) >= 12) {
        float *d = (float *)(a0 + 0x304);

        d[0] = D_00261B08[0];
        d[1] = D_00261B08[1];
        d[2] = D_00261B08[2];
        d[3] = D_00261B08[3];
    }
}
