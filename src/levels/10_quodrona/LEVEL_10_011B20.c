/* LEVEL_10.REL @ 0x011B20 — 56 octets, swc1 */
typedef struct {
    int f00;
    int f04;
    int f08;
    float f0C;
} Rec;

extern Rec D_00238900;

void func_011B20(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_00238900.f00 = 0;
            D_00238900.f0C = 1.0f;
            D_00238900.f08 = 0;
            D_00238900.f04 = 0;
        }
    }
}
