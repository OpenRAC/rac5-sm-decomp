/* LEVEL_17.REL @ 0x13BCE0 — 56 octets, swc1 */
typedef struct {
    int f00;
    int f04;
    int f08;
    float f0C;
} Rec;

extern Rec D_002D5C40;

void func_13BCE0(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_002D5C40.f00 = 0;
            D_002D5C40.f0C = 1.0f;
            D_002D5C40.f08 = 0;
            D_002D5C40.f04 = 0;
        }
    }
}
