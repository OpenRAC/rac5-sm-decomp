/* LEVEL_18.REL @ 0x152BE8 — 56 octets, swc1 */
typedef struct {
    int f00;
    int f04;
    int f08;
    float f0C;
} Rec;

extern Rec D_002E5458;

void func_152BE8(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_002E5458.f00 = 0;
            D_002E5458.f0C = 1.0f;
            D_002E5458.f08 = 0;
            D_002E5458.f04 = 0;
        }
    }
}
