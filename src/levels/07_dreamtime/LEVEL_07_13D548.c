typedef struct {
    char pad[0x6C];
    int f6C;
    char pad2[0x68];
    float fD8;
    float fDC;
} V;

extern void func_01CCE8(int a0, int a1, void *a2, int a3, int a4, int a5,
                        int a6, float f);

void func_13D548(char *a0, int a1, int a2)
{
    V *v1 = *(V **)(a0 + 0x58);
    float f = v1->f6C ? v1->fDC : v1->fD8;

    func_01CCE8(a1, a2, a0 + 0x30, 0x529, 0x101, 2, 1, f);
}
