/* LEVEL_16:0x065E40 -- placement copy of LEVEL_01_074F08.c: adds to an existing entry's timer or registers a new tracked entry. */
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
extern int D_001A3B14;
extern struct E D_001EC780[];
extern int func_065DF0(struct Obj *o);
extern float *func_0660E8(struct Obj *o);
extern void func_066138(void);

void func_065E40(int a, struct Obj *obj, int c, int d, float h)
{
    float *t;
    int *n;

    if (func_065DF0(obj) == 0)
        return;
    n = &D_001A3B14;
    if (*n != 16) {
        t = func_0660E8(obj);
        if (t != 0) {
            t[1] = t[1] + h * 0.25f;
            if (t[1] > 1800.0f) {
                t[1] = 1800.0f;
            }
        } else {
            D_001EC780[*n].obj = obj;
            D_001EC780[*n].b = h;
            D_001EC780[*n].a = h;
            D_001EC780[*n].old = obj->p->cb;
            D_001EC780[*n].c = d;
            D_001EC780[*n].d = a;
            D_001EC780[*n].e = c;
            obj->p->cb = (int)func_066138;
            (*n)++;
        }
    }
}
