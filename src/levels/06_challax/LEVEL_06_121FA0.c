/* LEVEL_06.REL @ 0x121FA0 — 56 octets, swc1 */
typedef struct {
    int f00;
    int f04;
    int f08;
    float f0C;
} Rec;

extern Rec D_0033E600;

void func_121FA0(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_0033E600.f00 = 0;
            D_0033E600.f0C = 1.0f;
            D_0033E600.f08 = 0;
            D_0033E600.f04 = 0;
        }
    }
}
