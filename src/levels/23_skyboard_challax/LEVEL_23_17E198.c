/* LEVEL_23:0x17E198 -- placement copy of LEVEL_22_1314B8.c: counts down a timed state of an object and runs its per-state message or finish action. */
typedef struct Src {
    char pad_00[0x0C];
    unsigned char f_0C;
} Src;

typedef struct St {
    char pad_00[0x50];
    int tbl[4];
    char pad_60[0x38];
    int f_98;
    char pad_9C[8];
    float f_A4;
    char pad_A8[5];
    unsigned char f_AD;
    unsigned char f_AE;
    char pad_AF;
    unsigned char f_B0;
} St;

typedef struct Obj {
    char pad_00[0x54];
    Src *src;
    St *st;
} Obj;

extern char D_00365160[];

extern int func_0C0CA8(void);
extern void func_17D710(Obj *o);
extern char *func_123C28(int id);
extern void func_0C0B58(char *a, char *b);
extern void func_0AC270(void *arg0, void *arg1, void *arg2, void *arg3);
extern int sprintf(char *buf, const char *fmt, ...);

void func_17E198(Obj *o)
{
    Src *p;
    St *s;
    char *a;
    int id;
    char *f;
    char *g;

    if (o) {
        p = o->src;
        s = o->st;
        if (p) {
            if (s) {
                if (s->f_AE) {
                    if (s->f_A4 <= 0.0f || ((s->f_AE == 2 || s->f_AE == 4) && func_0C0CA8())) {
                        if (s->f_AE == 2 || s->f_AE == 3) {
                            s->f_B0 = 1;
                        } else if (s->f_AE == 4) {
                            func_17D710(o);
                        }
                        s->f_AE = 0;
                        s->f_98 = 0;
                    } else {
                        switch (s->f_AE) {
                        case 1:
                            f = func_123C28(0x204);
                            if (f) {
                                if (s->f_AD < 4) {
                                    sprintf(D_00365160, f, s->tbl[s->f_AD], p->f_0C);
                                    func_0AC270(0, D_00365160, 0, 0);
                                }
                            }
                            break;
                        case 4:
                            id = 0x2B8;
                            goto L_two;
                        case 2:
                            id = 0x205;
                        L_two:
                            a = func_123C28(id);
                            func_0C0B58(a, func_123C28(0x21A));
                            break;
                        case 3:
                            g = func_123C28(0x206);
                            func_0AC270(0, g, 0, 0);
                            break;
                        }
                        s->f_A4 -= 1.0f;
                    }
                }
            }
        }
    }
}
