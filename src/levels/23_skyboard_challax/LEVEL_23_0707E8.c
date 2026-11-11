/* LEVEL_23.REL @ 0x0707E8 — 56 octets, swc1 */
typedef struct {
    int f00;
    int f04;
    int f08;
    float f0C;
} Rec;

extern Rec D_00207710;

void func_0707E8(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_00207710.f00 = 0;
            D_00207710.f0C = 1.0f;
            D_00207710.f08 = 0;
            D_00207710.f04 = 0;
        }
    }
}
