/* LEVEL_24.REL @ 0x0C3628 — 56 octets, swc1 */
typedef struct {
    int f00;
    int f04;
    int f08;
    float f0C;
} Rec;

extern Rec D_002F7E78;

void func_0C3628(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_002F7E78.f00 = 0;
            D_002F7E78.f0C = 1.0f;
            D_002F7E78.f08 = 0;
            D_002F7E78.f04 = 0;
        }
    }
}
