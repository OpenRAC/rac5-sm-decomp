/* LEVEL_20.REL @ 0x0C7570 — 56 octets, swc1 */
typedef struct {
    int f00;
    int f04;
    int f08;
    float f0C;
} Rec;

extern Rec D_001A2DA8;

void func_0C7570(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_001A2DA8.f00 = 0;
            D_001A2DA8.f0C = 1.0f;
            D_001A2DA8.f08 = 0;
            D_001A2DA8.f04 = 0;
        }
    }
}
