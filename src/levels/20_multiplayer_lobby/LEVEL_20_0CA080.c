/* LEVEL_20.REL @ 0x0CA080 — 56 octets, swc1 */
typedef struct {
    int f00;
    int f04;
    int f08;
    float f0C;
} Rec;

extern Rec D_001A2E08;

void func_0CA080(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_001A2E08.f00 = 0;
            D_001A2E08.f0C = 1.0f;
            D_001A2E08.f08 = 0;
            D_001A2E08.f04 = 0;
        }
    }
}
