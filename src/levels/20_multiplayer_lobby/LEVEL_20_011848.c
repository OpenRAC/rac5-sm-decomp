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

extern Ctx D_00135BF0;
extern void func_0117E0(void);

void func_011848(void)
{
    unsigned int i;

    D_00135BF0.f_164 = 1.0f;
    D_00135BF0.f_160 = 0;
    for (i = 0; i < 2; i++) {
        D_00135BF0.a[i].w0 = 0;
        D_00135BF0.a[i].w1 = 0;
        D_00135BF0.a[i].w2 = 0;
        D_00135BF0.b[i].w0 = 0;
        D_00135BF0.b[i].w1 = 0;
        D_00135BF0.b[i].w2 = 0;
    }
    func_0117E0();
}
