typedef struct {
    float f00;
    float f04;
    int f08;
    int f0C;
} E;

extern E D_00221CE8[];

extern void func_074828(void *a0, int a1, int a2, int a3, float a4,
                        float a5);

void func_0749E0(void *a0, int a1, int a2, int a3, float v)
{
    E *e = &D_00221CE8[a1];

    func_074828(a0, a2, a3, e->f0C, e->f04, v);
}
