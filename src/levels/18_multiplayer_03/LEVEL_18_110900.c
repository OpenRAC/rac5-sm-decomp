/* LEVEL_18.REL @ 0x110900 — 56 octets, swc1 */
typedef struct {
    int f00;
    int f04;
    int f08;
    float f0C;
} Rec;

extern Rec D_002DF920;

void func_110900(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_002DF920.f00 = 0;
            D_002DF920.f0C = 1.0f;
            D_002DF920.f08 = 0;
            D_002DF920.f04 = 0;
        }
    }
}
