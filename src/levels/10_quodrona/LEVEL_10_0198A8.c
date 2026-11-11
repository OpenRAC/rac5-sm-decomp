/* LEVEL_10.REL @ 0x0198A8 — 48 octets, lwc1/swc1 */
typedef struct {
    float f00;
    float f04;
    float f08;
    float f0C;
    float f10;
} V;

extern V D_00238FB0;

void func_0198A8(V *a0, float f12)
{
    D_00238FB0.f00 = a0->f00;
    D_00238FB0.f04 = a0->f04;
    D_00238FB0.f08 = a0->f08;
    D_00238FB0.f0C = a0->f0C;
    D_00238FB0.f10 = f12;
}
