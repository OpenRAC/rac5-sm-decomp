typedef struct {
    char pad[0x1C];
    int f1C;
    char pad2[0x28];
    int f48;
} H;

extern struct { H *p; } D_001F3FAC;
extern int D_001F3FB4;

extern void func_000000(float a);

void func_027AC8(float v)
{
    H *h = D_001F3FAC.p;

    if (h->f48 < 0)
        h->f48 = h->f1C;
    func_000000((float)D_001F3FAC.p->f1C / 255.0f * v);
    D_001F3FB4 = 5;
}
