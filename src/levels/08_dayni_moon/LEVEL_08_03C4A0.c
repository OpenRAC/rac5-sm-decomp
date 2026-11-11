/* LEVEL_08.REL:0x03C4A0 -- reset of the global record D_00283E40. */
typedef struct {
    int i_00;
    int i_04;
    int i_08;
    float f_0C;
} Rec;

extern Rec D_00283E40;

void func__03C4A0(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_00283E40.f_0C = 1.0f;
            D_00283E40.i_00 = 0;
            D_00283E40.i_08 = 0;
            D_00283E40.i_04 = 0;
        }
    }
}
