/* LEVEL_02:0x07B7F0 -- placement copy of LEVEL_01_074F08.c: adds to an existing entry's timer or registers a new tracked entry. */
struct E {
    void *obj;
    float a;
    float b;
    int old;
    int c;
    int d;
    int e;
};
struct P { char pad[0xDC]; int cb; };
struct Obj { char pad[0x48]; struct P *p; };
extern int D_0020B084;
extern struct E D_002515C0[];
extern int func_07B7A0(struct Obj *o);
extern float *func_07BA98(struct Obj *o);
extern void func_07BAE8(void);

void func_07B7F0(int a, struct Obj *obj, int c, int d, float h)
{
    float *t;
    int *n;

    if (func_07B7A0(obj) == 0)
        return;
    n = &D_0020B084;
    if (*n != 16) {
        t = func_07BA98(obj);
        if (t != 0) {
            t[1] = t[1] + h * 0.25f;
            if (t[1] > 1800.0f) {
                t[1] = 1800.0f;
            }
        } else {
            D_002515C0[*n].obj = obj;
            D_002515C0[*n].b = h;
            D_002515C0[*n].a = h;
            D_002515C0[*n].old = obj->p->cb;
            D_002515C0[*n].c = d;
            D_002515C0[*n].d = a;
            D_002515C0[*n].e = c;
            obj->p->cb = (int)func_07BAE8;
            (*n)++;
        }
    }
}
