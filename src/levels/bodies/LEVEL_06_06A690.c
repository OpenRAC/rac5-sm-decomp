typedef struct {
    char pad[0x1F8];
    float f1F8;
} S;

void func_06A6C0(void *a0, void *a1, void *a2, int a3, float f12);

void func_06A690(S *a0, void *a1, void *a2, void *a3)
{
    func_06A6C0(a1, a2, a3, 0, a0->f1F8);
}
