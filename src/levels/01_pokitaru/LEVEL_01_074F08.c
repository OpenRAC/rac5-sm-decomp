/* LEVEL_01:0x074F08 -- adds to an existing entry's timer or registers a new tracked entry. */
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
extern int D_001F60C4;
extern struct E D_0023A0B0[];
extern int func_074EB8(struct Obj *o);
extern float *func_0751B0(struct Obj *o);
extern void func_075200(void);

void func_074F08(int a, struct Obj *obj, int c, int d, float h)
{
    float *t;
    int *n;

    if (func_074EB8(obj) == 0)
        return;
    n = &D_001F60C4;
    if (*n != 16) {
        t = func_0751B0(obj);
        if (t != 0) {
            t[1] = t[1] + h * 0.25f;
            if (t[1] > 1800.0f) {
                t[1] = 1800.0f;
            }
        } else {
            D_0023A0B0[*n].obj = obj;
            D_0023A0B0[*n].b = h;
            D_0023A0B0[*n].a = h;
            D_0023A0B0[*n].old = obj->p->cb;
            D_0023A0B0[*n].c = d;
            D_0023A0B0[*n].d = a;
            D_0023A0B0[*n].e = c;
            obj->p->cb = (int)func_075200;
            (*n)++;
        }
    }
}
