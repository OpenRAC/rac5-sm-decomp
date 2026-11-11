typedef struct {
    int w00;
    float f04;
    int w08;
    int w0C;
} Rec;

extern Rec D_001CF1A8;

void func_0648C0(int a0, int a1, int a2, int a3, float f, float g);

void func_064A78(int a0, int index, int b1, int b2, float f)
{
    Rec *p = &D_001CF1A8 + index;

    func_0648C0(a0, b1, b2, p->w0C, p->f04, f);
}
