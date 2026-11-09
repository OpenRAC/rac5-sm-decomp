/* LEVEL_03:0x074CF8 -- placement copy of LEVEL_01_074F08.c: adds to an existing entry's timer or registers a new tracked entry. */
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
extern int D_0020E744;
extern struct E D_00254F30[];
extern int func_074CA8(struct Obj *o);
extern float *func_074FA0(struct Obj *o);
extern void func_074FF0(void);

void func_074CF8(int a, struct Obj *obj, int c, int d, float h)
{
    float *t;
    int *n;

    if (func_074CA8(obj) == 0)
        return;
    n = &D_0020E744;
    if (*n != 16) {
        t = func_074FA0(obj);
        if (t != 0) {
            t[1] = t[1] + h * 0.25f;
            if (t[1] > 1800.0f) {
                t[1] = 1800.0f;
            }
        } else {
            D_00254F30[*n].obj = obj;
            D_00254F30[*n].b = h;
            D_00254F30[*n].a = h;
            D_00254F30[*n].old = obj->p->cb;
            D_00254F30[*n].c = d;
            D_00254F30[*n].d = a;
            D_00254F30[*n].e = c;
            obj->p->cb = (int)func_074FF0;
            (*n)++;
        }
    }
}
