typedef struct {
    char pad[0x1F8];
    float f1F8;
} S;

void func_066F40(void *a0, void *a1, void *a2, int a3, float f12);

void func_066F10(S *a0, void *a1, void *a2, void *a3)
{
    func_066F40(a1, a2, a3, 0, a0->f1F8);
}
