/* LEVEL_10.REL @ 0x0EE6B0 — 56 octets, swc1 */
typedef struct {
    int f00;
    int f04;
    int f08;
    float f0C;
} Rec;

extern Rec D_00336B48;

void func_0EE6B0(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_00336B48.f00 = 0;
            D_00336B48.f0C = 1.0f;
            D_00336B48.f08 = 0;
            D_00336B48.f04 = 0;
        }
    }
}
