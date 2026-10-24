typedef struct {
    char pad[0xD0];
    float fD0;
    char pad2[0x16C];
    float f240;
    char pad3[0x28];
    float f26C;
} S;

void func_0462A0(void *a0);

void func_04DC50(S *a0)
{
    float t = a0->fD0;

    a0->f240 = 0.050000004f;
    a0->f26C = t;
    func_0462A0(a0);
}
