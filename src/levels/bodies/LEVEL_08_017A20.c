/* LEVEL_08.REL @ 0x017A20 — 56 octets, swc1 */
typedef struct {
    int f00;
    int f04;
    int f08;
    float f0C;
} Rec;

extern Rec D_0027EA58;

void func_017A20(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_0027EA58.f00 = 0;
            D_0027EA58.f0C = 1.0f;
            D_0027EA58.f08 = 0;
            D_0027EA58.f04 = 0;
        }
    }
}
