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

extern Elem D_002515C0[1];
extern int D_0020B084;
extern char D_0007BAE8[1];

extern void func_07FE50(void *a0, int target);

void func_07B940(Head *a0)
{
    func_07FE50(a0->f0, (int)&D_0007BAE8);
    if (((Mid *)a0->f0)->f48->fDC == &D_0007BAE8) {
        ((Mid *)a0->f0)->f48->fDC = a0->fC;
    }
    if (--D_0020B084) {
        Elem *e = &D_002515C0[D_0020B084];
        if ((void *)a0 != (void *)e) {
            *(Elem *)a0 = *e;
        }
    }
}
