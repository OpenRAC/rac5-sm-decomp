/* LEVEL_04.REL:0x103108 -- reset of the global record D_0034BE18. */
typedef struct {
    int i_00;
    int i_04;
    int i_08;
    float f_0C;
} Rec;

extern Rec D_0034BE18;

void func_04_103108(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_0034BE18.f_0C = 1.0f;
            D_0034BE18.i_00 = 0;
            D_0034BE18.i_08 = 0;
            D_0034BE18.i_04 = 0;
        }
    }
}
