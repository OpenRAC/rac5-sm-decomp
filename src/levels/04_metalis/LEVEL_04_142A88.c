typedef struct {
    char pad[0x14];
    float f14;
    float f18;
    float f1C;
    float f20;
} Mat;

typedef struct {
    char pad[0x58];
    int f58;
} Flag;

typedef struct {
    char pad[0x58];
    Flag *f58;
} Obj;

extern Mat *D_002204F0;

void func_083E30(void *a0, void *a1, int a2, int a3, int a4, int a5,
                       int a6, int a7, float f0, float f1, float f2, float f3);

void func_142A88(Obj *a0)
{
    Flag *p = a0->f58;
    Mat *m = D_002204F0;

    if (m != 0) {
        func_083E30(a0, m, 0, 0, 0, 0, 0, 1, m->f14, m->f18, m->f1C,
                          m->f20);
    }
    p->f58 |= 1;
}
