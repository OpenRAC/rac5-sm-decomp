/* LEVEL_05.REL @ 0x021EF0 — 56 octets, swc1 */
typedef struct {
    int f00;
    int f04;
    int f08;
    float f0C;
} Rec;

extern Rec D_0021B968;

void func_021EF0(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_0021B968.f00 = 0;
            D_0021B968.f0C = 1.0f;
            D_0021B968.f08 = 0;
            D_0021B968.f04 = 0;
        }
    }
}
