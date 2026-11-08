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

extern Elem D_001DDA80[1];
extern int D_00197114;
extern char D_000668F8[1];

extern void func_06AB98(void *a0, int target);

void func_066750(Head *a0)
{
    func_06AB98(a0->f0, (int)&D_000668F8);
    if (((Mid *)a0->f0)->f48->fDC == &D_000668F8) {
        ((Mid *)a0->f0)->f48->fDC = a0->fC;
    }
    if (--D_00197114) {
        Elem *e = &D_001DDA80[D_00197114];
        if ((void *)a0 != (void *)e) {
            *(Elem *)a0 = *e;
        }
    }
}
