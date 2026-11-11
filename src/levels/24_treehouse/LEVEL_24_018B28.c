/* LEVEL_24.REL:018B28 -- resets the global record D_1FBA50: three zero words
   and a float set to one. */
typedef struct {
    int f_00;
    int f_04;
    int f_08;
    float f_0C;
} Rec;

extern Rec D_1FBA50;

void func_018B28(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_1FBA50.f_00 = 0;
            D_1FBA50.f_04 = 0;
            D_1FBA50.f_08 = 0;
            D_1FBA50.f_0C = 1.0f;
        }
    }
}
