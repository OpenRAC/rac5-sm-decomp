extern int D_001D16A0;
extern char D_001CFED0[];

extern void func_012DD0(void *a0, void *a1, int a2, int a3);
extern void func_154A90(void *a0, int a1, int a2);

void func_155D60(char *a0)
{
    char *s1 = *(char **)(a0 + 0x58);
    int off = ((D_001D16A0 - 0x10) << 5) + 4;
    float f = *(float *)(D_001CFED0 + off);

    *(int *)(s1 + 0x4C) = 0;
    *(float *)(s1 + 0x44) = f;
    *(int *)(a0 + 0x78) = (*(int *)(a0 + 0x78) & 0xFFF0FFFF) | 0x20000;
    func_012DD0(s1, a0, 1, 0x10);
    *(unsigned char *)(s1 + 0x50) = 0xFF;
    func_154A90(a0, 0xFF, *(unsigned char *)(a0 + 0x45));
}
