/* LEVEL_19.REL @ 0x0B27E0 — 56 octets, swc1 */
typedef struct {
    int f00;
    int f04;
    int f08;
    float f0C;
} Rec;

extern Rec D_00277250;

void func_0B27E0(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_00277250.f00 = 0;
            D_00277250.f0C = 1.0f;
            D_00277250.f08 = 0;
            D_00277250.f04 = 0;
        }
    }
}
