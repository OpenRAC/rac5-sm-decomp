/* LEVEL_02.REL:0x128F50 -- reset of the global record D_00368D50. */
typedef struct {
    int i_00;
    int i_04;
    int i_08;
    float f_0C;
} Rec;

extern Rec D_00368D50;

void func__128F50(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_00368D50.f_0C = 1.0f;
            D_00368D50.i_00 = 0;
            D_00368D50.i_08 = 0;
            D_00368D50.i_04 = 0;
        }
    }
}
