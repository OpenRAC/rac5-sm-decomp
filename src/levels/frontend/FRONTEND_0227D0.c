/* FRONTEND.REL @ 0x0227D0 — 56 octets, swc1 */
typedef struct {
    int f00;
    int f04;
    int f08;
    float f0C;
} Rec;

extern Rec D_001EF2D0;

void func_0227D0(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_001EF2D0.f00 = 0;
            D_001EF2D0.f0C = 1.0f;
            D_001EF2D0.f08 = 0;
            D_001EF2D0.f04 = 0;
        }
    }
}
