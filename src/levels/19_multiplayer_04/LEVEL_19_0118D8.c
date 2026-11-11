typedef struct {
    int w0;
    int w1;
    int w2;
} Rec;

typedef struct {
    Rec a[2];
    Rec b[2];
    char pad[0x160 - 0x30];
    int f_160;
    float f_164;
} Ctx;

extern Ctx D_001DE3F0;
extern void func_011820(void);

void func_0118D8(void)
{
    unsigned int i;

    D_001DE3F0.f_164 = 1.0f;
    D_001DE3F0.f_160 = 0;
    for (i = 0; i < 2; i++) {
        D_001DE3F0.a[i].w0 = 0;
        D_001DE3F0.a[i].w1 = 0;
        D_001DE3F0.a[i].w2 = 0;
        D_001DE3F0.b[i].w0 = 0;
        D_001DE3F0.b[i].w1 = 0;
        D_001DE3F0.b[i].w2 = 0;
    }
    func_011820();
}
