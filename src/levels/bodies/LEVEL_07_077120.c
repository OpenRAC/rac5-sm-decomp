/* LEVEL_07:0x077120 -- placement copy of LEVEL_01_074F08.c: adds to an existing entry's timer or registers a new tracked entry. */
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
extern int D_0020A3C4;
extern struct E D_0024F9B0[];
extern int func_0770D0(struct Obj *o);
extern float *func_0773A0(struct Obj *o);
extern void func_0773F0(void);

void func_077120(int a, struct Obj *obj, int c, int d, float h)
{
    float *t;
    int *n;

    if (func_0770D0(obj) == 0)
        return;
    n = &D_0020A3C4;
    if (*n != 16) {
        t = func_0773A0(obj);
        if (t != 0) {
            t[1] = t[1] + h * 0.25f;
            if (t[1] > 1800.0f) {
                t[1] = 1800.0f;
            }
        } else {
            D_0024F9B0[*n].obj = obj;
            D_0024F9B0[*n].b = h;
            D_0024F9B0[*n].a = h;
            D_0024F9B0[*n].old = obj->p->cb;
            D_0024F9B0[*n].c = d;
            D_0024F9B0[*n].d = a;
            D_0024F9B0[*n].e = c;
            obj->p->cb = (int)func_0773F0;
            (*n)++;
        }
    }
}
