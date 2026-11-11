/* LEVEL_22.REL @ 0x016B50 — 56 octets, swc1 */
typedef struct {
    int f00;
    int f04;
    int f08;
    float f0C;
} Rec;

extern Rec D_00181750;

void func_016B50(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_00181750.f00 = 0;
            D_00181750.f0C = 1.0f;
            D_00181750.f08 = 0;
            D_00181750.f04 = 0;
        }
    }
}
