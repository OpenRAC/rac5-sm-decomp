/* LEVEL_07.REL @ 0x16F948 — 56 octets, swc1 */
typedef struct {
    int f00;
    int f04;
    int f08;
    float f0C;
} Rec;

extern Rec D_003AB080;

void func_16F948(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_003AB080.f00 = 0;
            D_003AB080.f0C = 1.0f;
            D_003AB080.f08 = 0;
            D_003AB080.f04 = 0;
        }
    }
}
