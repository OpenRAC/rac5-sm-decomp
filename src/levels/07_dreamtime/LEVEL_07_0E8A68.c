/* LEVEL_07.REL @ 0x0E8A68 — 56 octets, swc1 */
typedef struct {
    int f00;
    int f04;
    int f08;
    float f0C;
} Rec;

extern Rec D_00342F98;

void func_0E8A68(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_00342F98.f00 = 0;
            D_00342F98.f0C = 1.0f;
            D_00342F98.f08 = 0;
            D_00342F98.f04 = 0;
        }
    }
}
