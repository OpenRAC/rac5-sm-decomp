/* LEVEL_06.REL @ 0x0A0B58 — 56 octets, swc1 */
typedef struct {
    int f00;
    int f04;
    int f08;
    float f0C;
} Rec;

extern Rec D_002A01C8;

void func_0A0B58(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_002A01C8.f00 = 0;
            D_002A01C8.f0C = 1.0f;
            D_002A01C8.f08 = 0;
            D_002A01C8.f04 = 0;
        }
    }
}
