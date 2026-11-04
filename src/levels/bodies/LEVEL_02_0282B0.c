typedef struct {
    char pad[0x1C];
    int f1C;
    char pad2[0x28];
    int f48;
} H;

extern struct { H *p; } D_00208C2C;
extern int D_00208C34;

extern void func_000000(float a);

void func_0282B0(float v)
{
    H *h = D_00208C2C.p;

    if (h->f48 < 0)
        h->f48 = h->f1C;
    func_000000((float)D_00208C2C.p->f1C / 255.0f * v);
    D_00208C34 = 5;
}
