typedef struct {
    int f00;
    int f04;
    int f08;
    int f0C;
    int f10;
    int f14;
    int f18;
    int f1C;
    int f20;
    int f24;
    float f28;
    int f2C;
    float f30;
    float f34;
    int f38;
    int f3C;
    int f40;
    int f44;
} Rec;

typedef struct {
    Rec *p;
} Holder;

extern Holder D_001A2C34;

void f(void)
{
    D_001A2C34.p->f30 = 1.0f;
    D_001A2C34.p->f34 = 1.0f;
    D_001A2C34.p->f28 = 1.0f;
    D_001A2C34.p->f24 = 0;
    D_001A2C34.p->f40 = 0;
    D_001A2C34.p->f18 = 0xFF;
    D_001A2C34.p->f1C = 0xFF;
    D_001A2C34.p->f44 = 1;
}
