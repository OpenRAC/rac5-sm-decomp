/* LEVEL_03.REL @ 0x072F28 — 56 octets, swc1 */
typedef struct {
    int f00;
    int f04;
    int f08;
    float f0C;
} Rec;

extern Rec D_00254C70;

void func_072F28(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_00254C70.f00 = 0;
            D_00254C70.f0C = 1.0f;
            D_00254C70.f08 = 0;
            D_00254C70.f04 = 0;
        }
    }
}
