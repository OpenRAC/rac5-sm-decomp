extern float D_00206D08[];
extern void func_067800(void *a0, int a1);
extern int func_036A38(void *a0);
extern void func_1935F0(void *a0, int a1, int a2);

void func_0513A8(char *a0)
{
    if (*(unsigned short *)(a0 + 0x108) == 9)
        func_067800(a0, 0);
    if (func_036A38(a0))
        func_1935F0(a0, 0, 1);
    if ((unsigned)(*(unsigned short *)(a0 + 0x102) - 0x28) >= 12) {
        float *d = (float *)(a0 + 0x304);

        d[0] = D_00206D08[0];
        d[1] = D_00206D08[1];
        d[2] = D_00206D08[2];
        d[3] = D_00206D08[3];
    }
}
