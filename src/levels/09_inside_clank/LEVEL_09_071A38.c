/* LEVEL_09:0x071A38 -- placement copy of LEVEL_01_074F08.c: adds to an existing entry's timer or registers a new tracked entry. */
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
extern int D_001DFEC4;
extern struct E D_00221830[];
extern int func_0719E8(struct Obj *o);
extern float *func_071CB8(struct Obj *o);
extern void func_071D08(void);

void func_071A38(int a, struct Obj *obj, int c, int d, float h)
{
    float *t;
    int *n;

    if (func_0719E8(obj) == 0)
        return;
    n = &D_001DFEC4;
    if (*n != 16) {
        t = func_071CB8(obj);
        if (t != 0) {
            t[1] = t[1] + h * 0.25f;
            if (t[1] > 1800.0f) {
                t[1] = 1800.0f;
            }
        } else {
            D_00221830[*n].obj = obj;
            D_00221830[*n].b = h;
            D_00221830[*n].a = h;
            D_00221830[*n].old = obj->p->cb;
            D_00221830[*n].c = d;
            D_00221830[*n].d = a;
            D_00221830[*n].e = c;
            obj->p->cb = (int)func_071D08;
            (*n)++;
        }
    }
}
