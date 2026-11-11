/* LEVEL_16.REL @ 0x13EAC0 — 56 octets, swc1 */
typedef struct {
    int f00;
    int f04;
    int f08;
    float f0C;
} Rec;

extern Rec D_002E4A00;

void func_13EAC0(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_002E4A00.f00 = 0;
            D_002E4A00.f0C = 1.0f;
            D_002E4A00.f08 = 0;
            D_002E4A00.f04 = 0;
        }
    }
}
