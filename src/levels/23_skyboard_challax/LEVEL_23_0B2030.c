/* LEVEL_23.REL @ 0x0B2030 — 56 octets, swc1 */
typedef struct {
    int f00;
    int f04;
    int f08;
    float f0C;
} Rec;

extern Rec D_002F9E50;

void func_0B2030(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_002F9E50.f00 = 0;
            D_002F9E50.f0C = 1.0f;
            D_002F9E50.f08 = 0;
            D_002F9E50.f04 = 0;
        }
    }
}
