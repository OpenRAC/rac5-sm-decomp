typedef struct {
    float f0;
    float f4;
    char pad[8];
    int f10;
} Rec;

void func_0015A8(Rec *r, float x, float y);

void func_001610(Rec *r, float a, float b, float c)
{
    switch (r->f10) {
    case 0:
        func_0015A8(r, c, r->f4);
        break;
    case 1:
        r->f0 = r->f0 + c * r->f4;
        break;
    case 2:
        func_0015A8(r, c, a * b * r->f4);
        break;
    }
}
