/* LEVEL_04.REL @ 0x193DC0 — 56 octets, swc1 */
typedef struct {
    int f00;
    int f04;
    int f08;
    float f0C;
} Rec;

extern Rec D_003B13C0;

void func_193DC0(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_003B13C0.f00 = 0;
            D_003B13C0.f0C = 1.0f;
            D_003B13C0.f08 = 0;
            D_003B13C0.f04 = 0;
        }
    }
}
