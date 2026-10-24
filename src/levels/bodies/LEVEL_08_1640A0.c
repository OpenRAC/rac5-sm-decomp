extern char D_003E10EC[];
extern char D_003E0E48[];

extern void func_02ED50(void *a0, void *a1, void *a2, int a3, int a4);

void func_1640A0(char *a0, int a1, int a2)
{
    *(short *)a0 = 0;
    func_02ED50(a0 + 0x48, D_003E10EC, D_003E0E48, a1, a2);
    *(float *)(a0 + 0x80) = 60.0f;
}
