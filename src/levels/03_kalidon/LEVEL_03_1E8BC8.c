/* LEVEL_03.REL @ 0x1E8BC8 — 56 octets, swc1 */
typedef struct {
    int f00;
    int f04;
    int f08;
    float f0C;
} Rec;

extern Rec D_003B3D38;

void func_1E8BC8(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_003B3D38.f00 = 0;
            D_003B3D38.f0C = 1.0f;
            D_003B3D38.f08 = 0;
            D_003B3D38.f04 = 0;
        }
    }
}
