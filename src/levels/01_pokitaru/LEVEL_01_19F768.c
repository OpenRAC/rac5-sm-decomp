/* LEVEL_01.REL @ 0x19F768 — 56 octets, swc1 */
typedef struct {
    int f00;
    int f04;
    int f08;
    float f0C;
} Rec;

extern Rec D_00396F20;

void func_19F768(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_00396F20.f00 = 0;
            D_00396F20.f0C = 1.0f;
            D_00396F20.f08 = 0;
            D_00396F20.f04 = 0;
        }
    }
}
