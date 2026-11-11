/* LEVEL_08.REL @ 0x1C88E0 — 56 octets, swc1 */
typedef struct {
    int f00;
    int f04;
    int f08;
    float f0C;
} Rec;

extern Rec D_003E89D8;

void func_1C88E0(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_003E89D8.f00 = 0;
            D_003E89D8.f0C = 1.0f;
            D_003E89D8.f08 = 0;
            D_003E89D8.f04 = 0;
        }
    }
}
