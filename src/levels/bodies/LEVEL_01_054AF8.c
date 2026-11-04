extern float D_00217E88[];
extern void func_06AA40(void *a0, int a1);
extern int func_039FE8(void *a0);
extern void func_19DA18(void *a0, int a1, int a2);

void func_054AF8(char *a0)
{
    if (*(unsigned short *)(a0 + 0x108) == 9)
        func_06AA40(a0, 0);
    if (func_039FE8(a0))
        func_19DA18(a0, 0, 1);
    if ((unsigned)(*(unsigned short *)(a0 + 0x102) - 0x28) >= 12) {
        float *d = (float *)(a0 + 0x304);

        d[0] = D_00217E88[0];
        d[1] = D_00217E88[1];
        d[2] = D_00217E88[2];
        d[3] = D_00217E88[3];
    }
}
