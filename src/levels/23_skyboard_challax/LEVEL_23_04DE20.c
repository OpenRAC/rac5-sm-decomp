extern float D_001EB008[];
extern void func_0641F8(void *a0, int a1);
extern int func_033518(void *a0);
extern void func_17EE08(void *a0, int a1, int a2);

void func_04DE20(char *a0)
{
    if (*(unsigned short *)(a0 + 0x108) == 9)
        func_0641F8(a0, 0);
    if (func_033518(a0))
        func_17EE08(a0, 0, 1);
    if ((unsigned)(*(unsigned short *)(a0 + 0x102) - 0x28) >= 12) {
        float *d = (float *)(a0 + 0x304);

        d[0] = D_001EB008[0];
        d[1] = D_001EB008[1];
        d[2] = D_001EB008[2];
        d[3] = D_001EB008[3];
    }
}
