/* LEVEL_22:0x06A798 -- placement copy of LEVEL_01_074F08.c: adds to an existing entry's timer or registers a new tracked entry. */
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
extern int D_00155444;
extern struct E D_0018BCB0[];
extern int func_06A748(struct Obj *o);
extern float *func_06AA18(struct Obj *o);
extern void func_06AA68(void);

void func_06A798(int a, struct Obj *obj, int c, int d, float h)
{
    float *t;
    int *n;

    if (func_06A748(obj) == 0)
        return;
    n = &D_00155444;
    if (*n != 16) {
        t = func_06AA18(obj);
        if (t != 0) {
            t[1] = t[1] + h * 0.25f;
            if (t[1] > 1800.0f) {
                t[1] = 1800.0f;
            }
        } else {
            D_0018BCB0[*n].obj = obj;
            D_0018BCB0[*n].b = h;
            D_0018BCB0[*n].a = h;
            D_0018BCB0[*n].old = obj->p->cb;
            D_0018BCB0[*n].c = d;
            D_0018BCB0[*n].d = a;
            D_0018BCB0[*n].e = c;
            obj->p->cb = (int)func_06AA68;
            (*n)++;
        }
    }
}
