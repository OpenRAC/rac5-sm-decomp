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

extern Elem D_00221830[1];
extern int D_001DFEC4;
extern char D_00071D08[1];

extern void func_076070(void *a0, char *a1);

void func_071B60(Head *a0)
{
    func_076070(a0->f0, &D_00071D08);
    if (((Mid *)a0->f0)->f48->fDC == &D_00071D08) {
        ((Mid *)a0->f0)->f48->fDC = a0->fC;
    }
    if (--D_001DFEC4) {
        Elem *e = &D_00221830[D_001DFEC4];
        if ((void *)a0 != (void *)e) {
            *(Elem *)a0 = *e;
        }
    }
}
