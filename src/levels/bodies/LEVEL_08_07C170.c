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

extern Elem D_00289340[1];
extern int D_0023EF84;
extern char D_0007C318[1];

extern void func_080DF0(void *a0, char *a1);

void func_07C170(Head *a0)
{
    func_080DF0(a0->f0, &D_0007C318);
    if (((Mid *)a0->f0)->f48->fDC == &D_0007C318) {
        ((Mid *)a0->f0)->f48->fDC = a0->fC;
    }
    if (--D_0023EF84) {
        Elem *e = &D_00289340[D_0023EF84];
        if ((void *)a0 != (void *)e) {
            *(Elem *)a0 = *e;
        }
    }
}
