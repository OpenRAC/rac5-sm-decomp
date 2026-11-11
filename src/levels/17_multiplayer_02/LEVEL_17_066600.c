/* LEVEL_17:0x066600 -- placement copy of LEVEL_01_074F08.c: adds to an existing entry's timer or registers a new tracked entry. */
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
extern int D_00197114;
extern struct E D_001DDA80[];
extern int func_0665B0(struct Obj *o);
extern float *func_0668A8(struct Obj *o);
extern void func_0668F8(void);

void func_066600(int a, struct Obj *obj, int c, int d, float h)
{
    float *t;
    int *n;

    if (func_0665B0(obj) == 0)
        return;
    n = &D_00197114;
    if (*n != 16) {
        t = func_0668A8(obj);
        if (t != 0) {
            t[1] = t[1] + h * 0.25f;
            if (t[1] > 1800.0f) {
                t[1] = 1800.0f;
            }
        } else {
            D_001DDA80[*n].obj = obj;
            D_001DDA80[*n].b = h;
            D_001DDA80[*n].a = h;
            D_001DDA80[*n].old = obj->p->cb;
            D_001DDA80[*n].c = d;
            D_001DDA80[*n].d = a;
            D_001DDA80[*n].e = c;
            obj->p->cb = (int)func_0668F8;
            (*n)++;
        }
    }
}
