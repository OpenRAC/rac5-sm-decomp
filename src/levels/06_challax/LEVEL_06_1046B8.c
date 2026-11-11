/* LEVEL_06.REL:1046B8 -- resets the global record D_31E488: three zero words
   and a float set to one. */
typedef struct {
    int f_00;
    int f_04;
    int f_08;
    float f_0C;
} Rec;

extern Rec D_31E488;

void func_1046B8(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_31E488.f_00 = 0;
            D_31E488.f_04 = 0;
            D_31E488.f_08 = 0;
            D_31E488.f_0C = 1.0f;
        }
    }
}
