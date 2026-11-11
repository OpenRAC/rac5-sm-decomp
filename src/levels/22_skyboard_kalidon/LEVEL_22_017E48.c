/* LEVEL_22.REL @ 0x017E48 — 56 octets, swc1 */
typedef struct {
    int f00;
    int f04;
    int f08;
    float f0C;
} Rec;

extern Rec D_00181848;

void func_017E48(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_00181848.f00 = 0;
            D_00181848.f0C = 1.0f;
            D_00181848.f08 = 0;
            D_00181848.f04 = 0;
        }
    }
}
