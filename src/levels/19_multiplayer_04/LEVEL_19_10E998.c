typedef struct {
    char pad0[0x14];
    float f14;
    float f18;
    float f1C;
    float f20;
} Cam;

extern Cam *D_001B5BC0;
extern void func_073660(int, Cam *, float, float, float, float,
                        int, int, int, int, int, int);

void func_10E998(int a0)
{
    Cam *p = D_001B5BC0;

    if (p != 0) {
        func_073660(a0, p, p->f14, p->f18, p->f1C, p->f20,
                    0, 0, 0, 0, 0, 1);
    }
}
