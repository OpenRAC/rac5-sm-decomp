typedef struct {
    char pad[0x30C];
    float f30C;
    char pad2[0x08];
    float f318;
    char pad3[0x08];
    float f324;
} S;

extern S *D_0019C15C;

void func_001D70(void *a0, void *a1, void *a2, float f12, float f13,
                 float f14);

void func_00A318(void)
{
    S *p = D_0019C15C;

    func_001D70((char *)p + 0x30, (char *)p + 0x2CC, (char *)p + 0x2F0,
                p->f30C, p->f318, p->f324);
}
