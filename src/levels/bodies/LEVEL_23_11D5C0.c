typedef struct {
    int f00;
    int f04;
    float f08;
    float f0C;
    int f10;
} S;

extern void func_082970(void *, int, float);

void func_11D5C0(S *s)
{
    float f0;
    float f2;
    if (0.009999999776482582f < s->f0C) {
        func_082970((void *)&s->f10, s->f04, s->f0C);
        f0 = s->f0C - s->f08;
        f2 = 0.0f;
        s->f0C = f0;
        if (f0 < f2)
            s->f0C = f2;
    }
}
