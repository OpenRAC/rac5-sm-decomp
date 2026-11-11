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

extern Ctx D_00238970;
extern void func_011B78(void);

void func_011C30(void)
{
    unsigned int i;

    D_00238970.f_164 = 1.0f;
    D_00238970.f_160 = 0;
    for (i = 0; i < 2; i++) {
        D_00238970.a[i].w0 = 0;
        D_00238970.a[i].w1 = 0;
        D_00238970.a[i].w2 = 0;
        D_00238970.b[i].w0 = 0;
        D_00238970.b[i].w1 = 0;
        D_00238970.b[i].w2 = 0;
    }
    func_011B78();
}
