/* LEVEL_18.REL @ 0x0AE698 — 56 octets, swc1 */
typedef struct {
    int f00;
    int f04;
    int f08;
    float f0C;
} Rec;

extern Rec D_00277090;

void func_0AE698(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_00277090.f00 = 0;
            D_00277090.f0C = 1.0f;
            D_00277090.f08 = 0;
            D_00277090.f04 = 0;
        }
    }
}
