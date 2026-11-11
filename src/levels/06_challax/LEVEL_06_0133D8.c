/* LEVEL_06.REL:0x0133D8 -- reset of the global record D_0021C468. */
typedef struct {
    int i_00;
    int i_04;
    int i_08;
    float f_0C;
} Rec;

extern Rec D_0021C468;

void func_06_0133D8(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_0021C468.f_0C = 1.0f;
            D_0021C468.i_00 = 0;
            D_0021C468.i_08 = 0;
            D_0021C468.i_04 = 0;
        }
    }
}
