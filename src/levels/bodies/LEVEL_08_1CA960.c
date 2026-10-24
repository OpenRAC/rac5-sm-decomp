/* LEVEL_08.REL:0x1CA960 -- reset of the global record D_003E8B48. */
typedef struct {
    int i_00;
    int i_04;
    int i_08;
    float f_0C;
} Rec;

extern Rec D_003E8B48;

void func__1CA960(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_003E8B48.f_0C = 1.0f;
            D_003E8B48.i_00 = 0;
            D_003E8B48.i_08 = 0;
            D_003E8B48.i_04 = 0;
        }
    }
}
