/* LEVEL_07.REL:0x197AA8 -- reset of the global record D_003AC508. */
typedef struct {
    int i_00;
    int i_04;
    int i_08;
    float f_0C;
} Rec;

extern Rec D_003AC508;

void func_07_197AA8(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_003AC508.f_0C = 1.0f;
            D_003AC508.i_00 = 0;
            D_003AC508.i_08 = 0;
            D_003AC508.i_04 = 0;
        }
    }
}
