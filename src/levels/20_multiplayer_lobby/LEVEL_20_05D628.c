/* LEVEL_20.REL @ 0x05D628 — 56 octets, swc1 */
typedef struct {
    int f00;
    int f04;
    int f08;
    float f0C;
} Rec;

extern Rec D_00144588;

void func_05D628(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_00144588.f00 = 0;
            D_00144588.f0C = 1.0f;
            D_00144588.f08 = 0;
            D_00144588.f04 = 0;
        }
    }
}
