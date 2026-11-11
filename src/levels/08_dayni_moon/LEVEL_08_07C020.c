/* LEVEL_08:0x07C020 -- placement copy of LEVEL_01_074F08.c: adds to an existing entry's timer or registers a new tracked entry. */
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
extern int D_0023EF84;
extern struct E D_00289340[];
extern int func_07BFD0(struct Obj *o);
extern float *func_07C2C8(struct Obj *o);
extern void func_07C318(void);

void func_07C020(int a, struct Obj *obj, int c, int d, float h)
{
    float *t;
    int *n;

    if (func_07BFD0(obj) == 0)
        return;
    n = &D_0023EF84;
    if (*n != 16) {
        t = func_07C2C8(obj);
        if (t != 0) {
            t[1] = t[1] + h * 0.25f;
            if (t[1] > 1800.0f) {
                t[1] = 1800.0f;
            }
        } else {
            D_00289340[*n].obj = obj;
            D_00289340[*n].b = h;
            D_00289340[*n].a = h;
            D_00289340[*n].old = obj->p->cb;
            D_00289340[*n].c = d;
            D_00289340[*n].d = a;
            D_00289340[*n].e = c;
            obj->p->cb = (int)func_07C318;
            (*n)++;
        }
    }
}
