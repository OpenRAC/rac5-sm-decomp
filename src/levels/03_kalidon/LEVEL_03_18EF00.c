/* LEVEL_03:0x18EF00 -- advances an actor's fade-in/fade-out of its attached parts and manages the linked effect. */
typedef struct {
    char pad00[0x30];
    float f30;
    float f34;
    char pad38[0x29];
    unsigned char b61;
} Part;

typedef struct {
    char pad00[0x14];
    float f14;
    float f18;
    float f1C;
    float f20;
} Effect;

typedef struct {
    char pad00[0x80];
    Part *parts[8];
    char padA0[4];
    void *fx;
} State;

typedef struct {
    char pad00[0x45];
    unsigned char b45;
    unsigned char b46;
    char pad47[0xD];
    State *st;
    char pad58[0x18];
    int w70;
} Obj;

extern float D_002212D0[1];
extern float D_002212D4[1];
extern float D_002212E0[1];
extern float D_002212E4[1];
extern float D_002212E8[1];
extern float D_002212EC[1];
extern float D_002212F0[1];
extern Effect *D_00221318;
extern char D_00003030[];

extern int func_18EC20(Obj *o);
extern void **func_18EBB0(Obj *o);
extern void func_001088(int a, int b, int c);
extern void func_087C40(int a);
extern void func_1625D0(void *p, float f);
extern void func_1D4B60(void *p, float f);
extern void func_080918(void *p);
extern void func_0807B0(Obj *o, Effect *e, void **slot, int a, int b, int c, int d, int e2, float f1, float f2, float f3, float f4);

void func_18EF00(Obj *o)
{
    State *s = o->st;
    float d;
    unsigned int i;
    unsigned int j;
    unsigned int k;
    int hit;
    Part *p;
    void **arr;
    int n;

    if (!o->b46)
        d = D_002212D4[0];
    else
        d = D_002212D0[0];
    if (o->b45 == 2) {
        for (j = 0; j < 8; j++) {
            p = s->parts[j];
            if (p->b61 & 1) {
                if (D_002212E8[0] < p->f34)
                    p->f34 = p->f34 - d;
                else if (p->f30 < D_002212E4[0])
                    p->f30 = p->f30 + d;
            }
        }
        p = s->parts[func_18EC20(o) - 1];
        if (!(p->b61 & 1) || !(D_002212EC[0] <= p->f30))
            goto create;
        o->b45 = 3;
        o->w70 = 0;
        if (o->b46 == 0) {
            func_001088(0, (int)D_00003030, 0);
            func_087C40(2);
        }
        arr = func_18EBB0(o);
        n = func_18EC20(o);
        for (i = 0; i < n; i++) {
            if (arr[i]) {
                if (!(o->b46 & 1))
                    func_1625D0(arr[i], D_002212E0[0]);
                else
                    func_1D4B60(arr[i], D_002212E0[0]);
            }
        }
        goto cleanup;
    } else {
        hit = 0;
        for (k = 0; k < 8; k++) {
            p = s->parts[k];
            if (p->b61 & 1) {
                p->f30 = p->f30 + D_002212D0[0];
                hit = 1;
                if (D_002212F0[0] < p->f30) {
                    p->b61 = p->b61 & 0xFE;
                }
            }
        }
        if (!hit)
            goto cleanup;
    }
create:
    if (s->fx == 0) {
        Effect *e = D_00221318;
        void **slot = &s->fx;

        if (e)
            func_0807B0(o, e, slot, 0, 0, 0, 0, 1, e->f14, e->f18, e->f1C, e->f20);
    }
    return;
cleanup:
    if (s->fx) {
        func_080918(s->fx);
        s->fx = 0;
    }
}
