/* LEVEL_05.REL @ 0x01AD70 — 56 octets, swc1 */
typedef struct {
    int f00;
    int f04;
    int f08;
    float f0C;
} Rec;

extern Rec D_0021B938;

void func_01AD70(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_0021B938.f00 = 0;
            D_0021B938.f0C = 1.0f;
            D_0021B938.f08 = 0;
            D_0021B938.f04 = 0;
        }
    }
}
