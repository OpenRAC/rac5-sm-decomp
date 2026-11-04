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

extern Elem D_00143FE8[1];
extern int D_001061F4;
extern char D_000588C8[1];

extern void func_059748(void *a0, char *a1);

void func_058720(Head *a0)
{
    func_059748(a0->f0, &D_000588C8);
    if (((Mid *)a0->f0)->f48->fDC == &D_000588C8) {
        ((Mid *)a0->f0)->f48->fDC = a0->fC;
    }
    if (--D_001061F4) {
        Elem *e = &D_00143FE8[D_001061F4];
        if ((void *)a0 != (void *)e) {
            *(Elem *)a0 = *e;
        }
    }
}
