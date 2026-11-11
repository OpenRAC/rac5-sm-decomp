/* LEVEL_02.REL @ 0x17F428 — 56 octets, swc1 */
typedef struct {
    int f00;
    int f04;
    int f08;
    float f0C;
} Rec;

extern Rec D_003AD798;

void func_17F428(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_003AD798.f00 = 0;
            D_003AD798.f0C = 1.0f;
            D_003AD798.f08 = 0;
            D_003AD798.f04 = 0;
        }
    }
}
