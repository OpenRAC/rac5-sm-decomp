/* LEVEL_16.REL @ 0x084F90 — 56 octets, swc1 */
typedef struct {
    int f00;
    int f04;
    int f08;
    float f0C;
} Rec;

extern Rec D_0024E570;

void func_084F90(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_0024E570.f00 = 0;
            D_0024E570.f0C = 1.0f;
            D_0024E570.f08 = 0;
            D_0024E570.f04 = 0;
        }
    }
}
