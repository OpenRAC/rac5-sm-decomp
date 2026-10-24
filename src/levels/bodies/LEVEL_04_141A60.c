/* LEVEL_04.REL:0x141A60 -- reset of the global record D_003ABF10. */
typedef struct {
    int i_00;
    int i_04;
    int i_08;
    float f_0C;
} Rec;

extern Rec D_003ABF10;

void func_04_141A60(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_003ABF10.f_0C = 1.0f;
            D_003ABF10.i_00 = 0;
            D_003ABF10.i_08 = 0;
            D_003ABF10.i_04 = 0;
        }
    }
}
