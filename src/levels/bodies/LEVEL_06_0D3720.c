/* LEVEL_06.REL @ 0x0D3720 — 56 octets, swc1 */
typedef struct {
    int f00;
    int f04;
    int f08;
    float f0C;
} Rec;

extern Rec D_00319F50;

void func_0D3720(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_00319F50.f00 = 0;
            D_00319F50.f0C = 1.0f;
            D_00319F50.f08 = 0;
            D_00319F50.f04 = 0;
        }
    }
}
