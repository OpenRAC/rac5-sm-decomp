extern float D_001E8C08[];
extern void func_064090(void *a0, int a1);
extern int func_0330E0(void *a0);
extern void func_17C0B8(void *a0, int a1, int a2);

void func_04DC38(char *a0)
{
    if (*(unsigned short *)(a0 + 0x108) == 9)
        func_064090(a0, 0);
    if (func_0330E0(a0))
        func_17C0B8(a0, 0, 1);
    if ((unsigned)(*(unsigned short *)(a0 + 0x102) - 0x28) >= 12) {
        float *d = (float *)(a0 + 0x304);

        d[0] = D_001E8C08[0];
        d[1] = D_001E8C08[1];
        d[2] = D_001E8C08[2];
        d[3] = D_001E8C08[3];
    }
}
