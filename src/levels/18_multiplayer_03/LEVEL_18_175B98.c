/* LEVEL_18.REL:0x175B98 -- reset of the global record D_002E5A30. */
typedef struct {
    int i_00;
    int i_04;
    int i_08;
    float f_0C;
} Rec;

extern Rec D_002E5A30;

void func__175B98(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_002E5A30.f_0C = 1.0f;
            D_002E5A30.i_00 = 0;
            D_002E5A30.i_08 = 0;
            D_002E5A30.i_04 = 0;
        }
    }
}
