/* LEVEL_16.REL @ 0x0787E0 — 56 octets, swc1 */
typedef struct {
    int f00;
    int f04;
    int f08;
    float f0C;
} Rec;

extern Rec D_001F1360;

void func_0787E0(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_001F1360.f00 = 0;
            D_001F1360.f0C = 1.0f;
            D_001F1360.f08 = 0;
            D_001F1360.f04 = 0;
        }
    }
}
