typedef struct {
    char pad0[0x14];
    float f14;
    float f18;
    float f1C;
    float f20;
} Cam;

extern Cam *D_001F0A30;
extern void func_07D450(int, Cam *, float, float, float, float,
                        int, int, int, int, int, int);

void func_12A450(int a0)
{
    Cam *p = D_001F0A30;

    if (p != 0) {
        func_07D450(a0, p, p->f14, p->f18, p->f1C, p->f20,
                    0, 0, 0, 0, 0, 1);
    }
}
