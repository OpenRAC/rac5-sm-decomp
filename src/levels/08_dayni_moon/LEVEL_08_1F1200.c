/* LEVEL_08.REL @ 0x1F1200 — 56 octets, swc1 */
typedef struct {
    int f00;
    int f04;
    int f08;
    float f0C;
} Rec;

extern Rec D_003EAAB8;

void func_1F1200(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_003EAAB8.f00 = 0;
            D_003EAAB8.f0C = 1.0f;
            D_003EAAB8.f08 = 0;
            D_003EAAB8.f04 = 0;
        }
    }
}
