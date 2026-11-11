/* LEVEL_16.REL:0x00A2A8 -- relays three blocks of the global record and three
   of its readings to func_001D00. */
typedef struct {
    char pad0[0x30C];
    float f_30C;
    char pad1[0x318 - 0x310];
    float f_318;
    char pad2[0x324 - 0x31C];
    float f_324;
} G;

extern G *D_0019ACDC;

void func_001D00(void *a0, void *a1, void *a2, float f0, float f1, float f2);

void func_00A2A8(void)
{
    G *g = D_0019ACDC;

    func_001D00((char *)g + 0x30, (char *)g + 0x2CC, (char *)g + 0x2F0,
                g->f_30C, g->f_318, g->f_324);
}
