typedef struct {
    int w00;
    float f04;
    int w08;
} S;

extern int D_0023F000;

void func_19BA90(S *s)
{
    s->w00 = D_0023F000;
    s->f04 = 5.0f;
    s->w08 = 0;
}
