/* LEVEL_02.REL:0x0BB218 -- reset of the global record D_0033F040. */
typedef struct {
    int i_00;
    int i_04;
    int i_08;
    float f_0C;
} Rec;

extern Rec D_0033F040;

void func_02_0BB218(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_0033F040.f_0C = 1.0f;
            D_0033F040.i_00 = 0;
            D_0033F040.i_08 = 0;
            D_0033F040.i_04 = 0;
        }
    }
}
