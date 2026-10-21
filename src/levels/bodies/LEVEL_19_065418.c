/* a2 : sixteen-byte rows */
typedef struct {
    int i0;
    float f1;
    int i2;
    int i3;
} Rec;

extern Rec D_001CEE28[];

extern void func_065260(int a0, long long a1, long long a2, int a3,
                        float f0, float f1);

void func_065418(int a0, int a1, long long a2, long long a3, float f12)
{
    Rec *p = &D_001CEE28[a1];
    func_065260(a0, a2, a3, p->i3, p->f1, f12);
}
