/* LEVEL_08:0x00A728 -- placement copy of LEVEL_02_00A6C0.c. */
typedef struct {
    char pad[0x30C];
    float f30C;
    char pad2[0x08];
    float f318;
    char pad3[0x08];
    float f324;
} S;

extern S *D_00237DD4;

void func_002128(void *a0, void *a1, void *a2, float f12, float f13,
                 float f14);

void func_00A728(void)
{
    S *p = D_00237DD4;

    func_002128((char *)p + 0x30, (char *)p + 0x2CC, (char *)p + 0x2F0,
                p->f30C, p->f318, p->f324);
}
