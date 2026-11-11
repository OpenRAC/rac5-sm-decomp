/* LEVEL_01.REL @ 0x0B1D10 — 56 octets, swc1 */
typedef struct {
    int f00;
    int f04;
    int f08;
    float f0C;
} Rec;

extern Rec D_00327958;

void func_0B1D10(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_00327958.f00 = 0;
            D_00327958.f0C = 1.0f;
            D_00327958.f08 = 0;
            D_00327958.f04 = 0;
        }
    }
}
