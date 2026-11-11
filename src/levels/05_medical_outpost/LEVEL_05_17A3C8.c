/* LEVEL_05.REL @ 0x17A3C8 — 56 octets, swc1 */
typedef struct {
    int f00;
    int f04;
    int f08;
    float f0C;
} Rec;

extern Rec D_00382880;

void func_17A3C8(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_00382880.f00 = 0;
            D_00382880.f0C = 1.0f;
            D_00382880.f08 = 0;
            D_00382880.f04 = 0;
        }
    }
}
