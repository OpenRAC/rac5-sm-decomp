/* LEVEL_23:18F728 -- clears the global record D_00366340 (three
   words and a float) when the second argument is 0xFFFF and the first one
   is not null. */
typedef struct {
    int f_00;
    int f_04;
    int f_08;
    float f_0C;
} Rec;

extern Rec D_00366340;

void func_18F728(Rec *a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_00366340.f_00 = 0;
            D_00366340.f_04 = 0;
            D_00366340.f_08 = 0;
            D_00366340.f_0C = 1.0f;
        }
    }
}
