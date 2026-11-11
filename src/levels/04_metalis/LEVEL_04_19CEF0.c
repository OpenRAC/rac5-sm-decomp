/* LEVEL_04.REL:0x19CEF0 -- reset of the global record D_003B1990. */
typedef struct {
    int i_00;
    int i_04;
    int i_08;
    float f_0C;
} Rec;

extern Rec D_003B1990;

void func_04_19CEF0(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_003B1990.f_0C = 1.0f;
            D_003B1990.i_00 = 0;
            D_003B1990.i_08 = 0;
            D_003B1990.i_04 = 0;
        }
    }
}
