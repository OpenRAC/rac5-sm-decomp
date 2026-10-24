/* LEVEL_09.REL @ 0x0AEA70 — 56 octets, swc1 */
typedef struct {
    int f00;
    int f04;
    int f08;
    float f0C;
} Rec;

extern Rec D_0030F090;

void func_0AEA70(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_0030F090.f00 = 0;
            D_0030F090.f0C = 1.0f;
            D_0030F090.f08 = 0;
            D_0030F090.f04 = 0;
        }
    }
}
