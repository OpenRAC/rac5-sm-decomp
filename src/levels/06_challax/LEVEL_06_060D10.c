typedef struct {
    char pad0[0x34];
    float f34;
    char pad1[0x1B8 - 0x38];
    float f1B8;
} S;

extern int D_00225EF8;

int func_046350(S *s, float *a, float *b, float *c, float f0, int n, float f1);
void func_061CB0(S *s);

void func_060D10(S *s)
{
    float a = 0.0f;
    float b = 0.0f;
    float c;

    if (func_046350(s, &a, &b, &c, 0.0f, 0, 0.7f) == 0) {
        s->f34 = a;
        D_00225EF8 = 5;
        s->f1B8 = 0.0f;
        func_061CB0(s);
    }
}
