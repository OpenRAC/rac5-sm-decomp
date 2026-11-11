/* LEVEL_16.REL:0x11F268 -- reset of the global record D_002E1640. */
typedef struct {
    int i_00;
    int i_04;
    int i_08;
    float f_0C;
} Rec;

extern Rec D_002E1640;

void func__11F268(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_002E1640.f_0C = 1.0f;
            D_002E1640.i_00 = 0;
            D_002E1640.i_08 = 0;
            D_002E1640.i_04 = 0;
        }
    }
}
