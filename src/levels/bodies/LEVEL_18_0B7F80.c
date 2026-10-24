/* LEVEL_18.REL @ 0x0B7F80 — 56 octets, swc1 */
typedef struct {
    int f00;
    int f04;
    int f08;
    float f0C;
} Rec;

extern Rec D_0027A278;

void func_0B7F80(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_0027A278.f00 = 0;
            D_0027A278.f0C = 1.0f;
            D_0027A278.f08 = 0;
            D_0027A278.f04 = 0;
        }
    }
}
