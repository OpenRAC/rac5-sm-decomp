typedef struct {
    int   a;
    int   b;
    int   c;
    float d;
} Rec;

extern Rec   D_003AAFD8;
extern float D_003AAFE8;

void func_165890(Rec *p, int q)
{
    if (q != 0xFFFF)
        return;
    if (p == 0)
        return;

    D_003AAFD8.d = 1.0f;
    D_003AAFE8 = 0.36f;
    D_003AAFD8.a = 0;
    D_003AAFD8.c = 0;
    D_003AAFD8.b = 0;
}
