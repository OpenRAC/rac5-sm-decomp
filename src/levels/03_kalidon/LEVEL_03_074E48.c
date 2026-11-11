typedef struct {
    float f[6];
    int id;
} Elem;

typedef struct {
    char pad[0xDC];
    char *fDC;
} Sub;

typedef struct {
    char pad[0x48];
    Sub *f48;
} Mid;

typedef struct {
    void *f0;
    char pad[8];
    char *fC;
} Head;

extern Elem D_00254F30[1];
extern int D_0020E744;
extern char D_00074FF0[1];

extern void func_079360(void *a0, int target);

void func_074E48(Head *a0)
{
    func_079360(a0->f0, (int)&D_00074FF0);
    if (((Mid *)a0->f0)->f48->fDC == &D_00074FF0) {
        ((Mid *)a0->f0)->f48->fDC = a0->fC;
    }
    if (--D_0020E744) {
        Elem *e = &D_00254F30[D_0020E744];
        if ((void *)a0 != (void *)e) {
            *(Elem *)a0 = *e;
        }
    }
}
