/* LEVEL_05.REL @ 0x185120 — 56 octets, swc1 */
typedef struct {
    int f00;
    int f04;
    int f08;
    float f0C;
} Rec;

extern Rec D_00383778;

void func_185120(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_00383778.f00 = 0;
            D_00383778.f0C = 1.0f;
            D_00383778.f08 = 0;
            D_00383778.f04 = 0;
        }
    }
}
