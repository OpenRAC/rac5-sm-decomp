typedef struct {
    int f_00;
    int f_04;
    int f_08;
    float f_0C;
} Rec;

extern Rec D_0037B380;
extern float D_0037B390;
extern float D_0024BB54;

void func_0D91A0(Rec *a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
    D_0037B380.f_00 = 0;
    D_0037B380.f_04 = 0;
    D_0037B380.f_08 = 0;
    D_0037B380.f_0C = 1.0f;
    D_0037B390 = D_0024BB54;
        }
    }
}
