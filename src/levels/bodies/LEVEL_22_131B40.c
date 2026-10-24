/* LEVEL_22.REL @ 0x131B40 — 56 octets, swc1 */
typedef struct {
    int f00;
    int f04;
    int f08;
    float f0C;
} Rec;

extern Rec D_002E8028;

void func_131B40(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_002E8028.f00 = 0;
            D_002E8028.f0C = 1.0f;
            D_002E8028.f08 = 0;
            D_002E8028.f04 = 0;
        }
    }
}
