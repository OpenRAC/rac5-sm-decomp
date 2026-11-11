typedef struct {
    int f00;
    float f04;
    int f08;
    int f0C;
} E;

extern E D_0022DA58[];

void func_0763A0(int a0, int a1, int a2, int a3, float f12, float f13);

void func_076558(int a0, int a1, int a2, int a3, float f12)
{
    E *e = &D_0022DA58[a1];

    func_0763A0(a0, a2, a3, e->f0C, e->f04, f12);
}
