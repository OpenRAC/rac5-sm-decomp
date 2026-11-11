/* LEVEL_24:0x06EF28 -- placement copy of LEVEL_01_074F08.c: adds to an existing entry's timer or registers a new tracked entry. */
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
extern int D_001C6D44;
extern struct E D_00205FB0[];
extern int func_06EED8(struct Obj *o);
extern float *func_06F1A8(struct Obj *o);
extern void func_06F1F8(void);

void func_06EF28(int a, struct Obj *obj, int c, int d, float h)
{
    float *t;
    int *n;

    if (func_06EED8(obj) == 0)
        return;
    n = &D_001C6D44;
    if (*n != 16) {
        t = func_06F1A8(obj);
        if (t != 0) {
            t[1] = t[1] + h * 0.25f;
            if (t[1] > 1800.0f) {
                t[1] = 1800.0f;
            }
        } else {
            D_00205FB0[*n].obj = obj;
            D_00205FB0[*n].b = h;
            D_00205FB0[*n].a = h;
            D_00205FB0[*n].old = obj->p->cb;
            D_00205FB0[*n].c = d;
            D_00205FB0[*n].d = a;
            D_00205FB0[*n].e = c;
            obj->p->cb = (int)func_06F1F8;
            (*n)++;
        }
    }
}
