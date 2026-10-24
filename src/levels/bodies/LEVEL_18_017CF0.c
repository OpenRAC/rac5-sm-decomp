/* LEVEL_18.REL @ 0x017CF0 — 48 octets, lwc1/swc1 */
typedef struct {
    float f00;
    float f04;
    float f08;
    float f0C;
    float f10;
} V;

extern V D_001DEC30;

void func_017CF0(V *a0, float f12)
{
    D_001DEC30.f00 = a0->f00;
    D_001DEC30.f04 = a0->f04;
    D_001DEC30.f08 = a0->f08;
    D_001DEC30.f0C = a0->f0C;
    D_001DEC30.f10 = f12;
}
