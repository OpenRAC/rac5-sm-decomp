/* LEVEL_16.REL @ 0x081248 — 56 octets, swc1 */
typedef struct {
    int f00;
    int f04;
    int f08;
    float f0C;
} Rec;

extern Rec D_002105E0;

void func_081248(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_002105E0.f00 = 0;
            D_002105E0.f0C = 1.0f;
            D_002105E0.f08 = 0;
            D_002105E0.f04 = 0;
        }
    }
}
