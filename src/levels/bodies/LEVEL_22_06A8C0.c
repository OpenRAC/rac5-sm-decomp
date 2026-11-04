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

extern Elem D_0018BCB0[1];
extern int D_00155444;
extern char D_0006AA68[1];

extern void func_06BF28(void *a0, char *a1);

void func_06A8C0(Head *a0)
{
    func_06BF28(a0->f0, &D_0006AA68);
    if (((Mid *)a0->f0)->f48->fDC == &D_0006AA68) {
        ((Mid *)a0->f0)->f48->fDC = a0->fC;
    }
    if (--D_00155444) {
        Elem *e = &D_0018BCB0[D_00155444];
        if ((void *)a0 != (void *)e) {
            *(Elem *)a0 = *e;
        }
    }
}
