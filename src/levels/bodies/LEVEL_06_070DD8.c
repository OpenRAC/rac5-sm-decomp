/* LEVEL_06:0x070DD8 -- placement copy of LEVEL_01_074F08.c: adds to an existing entry's timer or registers a new tracked entry. */
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
extern int D_001E4FC4;
extern struct E D_00226E30[];
extern int func_070D88(struct Obj *o);
extern float *func_071058(struct Obj *o);
extern void func_0710A8(void);

void func_070DD8(int a, struct Obj *obj, int c, int d, float h)
{
    float *t;
    int *n;

    if (func_070D88(obj) == 0)
        return;
    n = &D_001E4FC4;
    if (*n != 16) {
        t = func_071058(obj);
        if (t != 0) {
            t[1] = t[1] + h * 0.25f;
            if (t[1] > 1800.0f) {
                t[1] = 1800.0f;
            }
        } else {
            D_00226E30[*n].obj = obj;
            D_00226E30[*n].b = h;
            D_00226E30[*n].a = h;
            D_00226E30[*n].old = obj->p->cb;
            D_00226E30[*n].c = d;
            D_00226E30[*n].d = a;
            D_00226E30[*n].e = c;
            obj->p->cb = (int)func_0710A8;
            (*n)++;
        }
    }
}
