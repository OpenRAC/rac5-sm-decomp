typedef struct {
    float f0;
    float f4;
    char pad[8];
    int f10;
} Rec;

void func_001538(Rec *r, float x, float y);

void func_0015A0(Rec *r, float a, float b, float c)
{
    switch (r->f10) {
    case 0:
        func_001538(r, c, r->f4);
        break;
    case 1:
        r->f0 = r->f0 + c * r->f4;
        break;
    case 2:
        func_001538(r, c, a * b * r->f4);
        break;
    }
}
