/* LEVEL_01.REL @ 0x1DD3A0 — 56 octets, swc1 */
typedef struct {
    int f00;
    int f04;
    int f08;
    float f0C;
} Rec;

extern Rec D_00398D18;

void func_1DD3A0(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_00398D18.f00 = 0;
            D_00398D18.f0C = 1.0f;
            D_00398D18.f08 = 0;
            D_00398D18.f04 = 0;
        }
    }
}
