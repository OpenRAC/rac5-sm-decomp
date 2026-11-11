/* LEVEL_04.REL @ 0x019EE8 — 48 octets, lwc1/swc1 */
typedef struct {
    float f00;
    float f04;
    float f08;
    float f0C;
    float f10;
} V;

extern V D_0024A3B0;

void func_019EE8(V *a0, float f12)
{
    D_0024A3B0.f00 = a0->f00;
    D_0024A3B0.f04 = a0->f04;
    D_0024A3B0.f08 = a0->f08;
    D_0024A3B0.f0C = a0->f0C;
    D_0024A3B0.f10 = f12;
}
