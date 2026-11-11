/* LEVEL_09.REL @ 0x04DE40 — 56 octets, swc1 */
typedef struct {
    int f00;
    int f04;
    int f08;
    float f0C;
} Rec;

extern Rec D_00220438;

void func_04DE40(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_00220438.f00 = 0;
            D_00220438.f0C = 1.0f;
            D_00220438.f08 = 0;
            D_00220438.f04 = 0;
        }
    }
}
