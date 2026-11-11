/* LEVEL_24.REL @ 0x195BC8 — 56 octets, swc1 */
typedef struct {
    int f00;
    int f04;
    int f08;
    float f0C;
} Rec;

extern Rec D_00362278;

void func_195BC8(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_00362278.f00 = 0;
            D_00362278.f0C = 1.0f;
            D_00362278.f08 = 0;
            D_00362278.f04 = 0;
        }
    }
}
