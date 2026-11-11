/* LEVEL_04.REL @ 0x050D88 — 56 octets, swc1 */
typedef struct {
    int f00;
    int f04;
    int f08;
    float f0C;
} Rec;

extern Rec D_00253430;

void func_050D88(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_00253430.f00 = 0;
            D_00253430.f0C = 1.0f;
            D_00253430.f08 = 0;
            D_00253430.f04 = 0;
        }
    }
}
