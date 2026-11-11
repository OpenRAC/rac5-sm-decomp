/* LEVEL_20.REL:0x02A468 -- reset of the global record D_00139908. */
typedef struct {
    int i_00;
    int i_04;
    int i_08;
    float f_0C;
} Rec;

extern Rec D_00139908;

void func_20_02A468(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_00139908.f_0C = 1.0f;
            D_00139908.i_00 = 0;
            D_00139908.i_08 = 0;
            D_00139908.i_04 = 0;
        }
    }
}
