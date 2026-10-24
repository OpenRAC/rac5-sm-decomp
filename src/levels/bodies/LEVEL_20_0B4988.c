/* LEVEL_20.REL @ 0x0B4988 — 56 octets, swc1 */
typedef struct {
    int f00;
    int f04;
    int f08;
    float f0C;
} Rec;

extern Rec D_0019EEB0;

void func_0B4988(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_0019EEB0.f00 = 0;
            D_0019EEB0.f0C = 1.0f;
            D_0019EEB0.f08 = 0;
            D_0019EEB0.f04 = 0;
        }
    }
}
