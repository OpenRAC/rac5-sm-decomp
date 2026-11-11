typedef struct {
    char pad0[0x34];
    float f34;
    char pad1[0x1B8 - 0x38];
    float f1B8;
} S;

extern int D_002208F8;

int func_046108(S *s, float *a, float *b, float *c, float f0, int n, float f1);
void func_061AF0(S *s);

void func_060B50(S *s)
{
    float a = 0.0f;
    float b = 0.0f;
    float c;

    if (func_046108(s, &a, &b, &c, 0.0f, 0, 0.7f) == 0) {
        s->f34 = a;
        D_002208F8 = 5;
        s->f1B8 = 0.0f;
        func_061AF0(s);
    }
}
