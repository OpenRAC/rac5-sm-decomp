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

extern Elem D_002434B0[1];
extern int D_001FF0C4;
extern char D_000758A0[1];

extern void func_079C08(void *a0, int target);

void func_0756F8(Head *a0)
{
    func_079C08(a0->f0, (int)&D_000758A0);
    if (((Mid *)a0->f0)->f48->fDC == &D_000758A0) {
        ((Mid *)a0->f0)->f48->fDC = a0->fC;
    }
    if (--D_001FF0C4) {
        Elem *e = &D_002434B0[D_001FF0C4];
        if ((void *)a0 != (void *)e) {
            *(Elem *)a0 = *e;
        }
    }
}
