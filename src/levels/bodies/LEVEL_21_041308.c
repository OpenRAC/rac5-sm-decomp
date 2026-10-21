typedef struct {
    char pad0[0xD0];
    float vD0;
    char pad1[0x240 - 0xD4];
    float v240;
    char pad2[0x26C - 0x244];
    float v26C;
} T;

void func_03A688(T *a0);

void func_041308(T *a0)
{
    a0->v240 = 0.050000004f;
    a0->v26C = a0->vD0;
    func_03A688(a0);
}
