/* LEVEL_08:0x2024A0 -- picks an effect by distance: near calls a helper, mid range spawns a pooled object, far starts a random-angle effect. */

struct Pt {
    float x;
    float y;
    float z;
};

struct Fx {
    char pad_00[0x24];
    float pos_24[3];
    float f_30;
};

extern char D_003EB180[];
extern char D_003EB090[];
extern char D_003EB1C0[];

extern void func_2022F0(struct Pt *p, float d);
extern struct Fx *func_0AA518(int *n, char *tab, int k);
extern void func_202030(char *buf, char *tab);
extern void func_134E80(struct Fx *fx, char *buf);
extern void func_115710(char *tab, struct Pt *p, float ang);
extern int rand(void);

void func_2024A0(struct Pt *p, float d)
{
    char buf[0x40];
    int n;
    struct Fx *fx;
    float *q;
    float tau;

    if (d < 20.0f) {
        func_2022F0(p, d);
        return;
    }
    if (d < 38.0f) {
        fx = func_0AA518(&n, D_003EB180, 1);
        if (n == 0) {
            return;
        }
        func_202030(buf, D_003EB090);
        func_134E80(fx, buf);
        q = fx->pos_24;
        q[0] = p->x;
        q[1] = p->y;
        q[2] = p->z;
        fx->f_30 = (float)rand() * 4.65661287e-10f * 2.0f + 38.0f;
        return;
    }
    tau = 6.2831855f;
    func_115710(D_003EB1C0, p, (float)rand() * 4.65661287e-10f * tau);
}
