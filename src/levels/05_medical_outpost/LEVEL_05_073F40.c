/* LEVEL_05:0x073F40 -- placement copy of LEVEL_01_074F08.c: adds to an existing entry's timer or registers a new tracked entry. */
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
extern int D_001E5444;
extern struct E D_00225DB0[];
extern int func_073EF0(struct Obj *o);
extern float *func_0741E8(struct Obj *o);
extern void func_074238(void);

void func_073F40(int a, struct Obj *obj, int c, int d, float h)
{
    float *t;
    int *n;

    if (func_073EF0(obj) == 0)
        return;
    n = &D_001E5444;
    if (*n != 16) {
        t = func_0741E8(obj);
        if (t != 0) {
            t[1] = t[1] + h * 0.25f;
            if (t[1] > 1800.0f) {
                t[1] = 1800.0f;
            }
        } else {
            D_00225DB0[*n].obj = obj;
            D_00225DB0[*n].b = h;
            D_00225DB0[*n].a = h;
            D_00225DB0[*n].old = obj->p->cb;
            D_00225DB0[*n].c = d;
            D_00225DB0[*n].d = a;
            D_00225DB0[*n].e = c;
            obj->p->cb = (int)func_074238;
            (*n)++;
        }
    }
}
