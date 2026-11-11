/* LEVEL_08.REL @ 0x031D30 — 56 octets, swc1 */
typedef struct {
    int f00;
    int f04;
    int f08;
    float f0C;
} Rec;

extern Rec D_002822A0;

void func_031D30(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_002822A0.f00 = 0;
            D_002822A0.f0C = 1.0f;
            D_002822A0.f08 = 0;
            D_002822A0.f04 = 0;
        }
    }
}
