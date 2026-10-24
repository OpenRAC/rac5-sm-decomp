/* LEVEL_23.REL @ 0x1AE820 — 56 octets, swc1 */
typedef struct {
    int f00;
    int f04;
    int f08;
    float f0C;
} Rec;

extern Rec D_00366B08;

void func_1AE820(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_00366B08.f00 = 0;
            D_00366B08.f0C = 1.0f;
            D_00366B08.f08 = 0;
            D_00366B08.f04 = 0;
        }
    }
}
