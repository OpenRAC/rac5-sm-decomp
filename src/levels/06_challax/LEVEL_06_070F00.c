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

extern Elem D_00226E30[1];
extern int D_001E4FC4;
extern char D_000710A8[1];

extern void func_0729F0(void *a0, int target);

void func_070F00(Head *a0)
{
    func_0729F0(a0->f0, (int)&D_000710A8);
    if (((Mid *)a0->f0)->f48->fDC == &D_000710A8) {
        ((Mid *)a0->f0)->f48->fDC = a0->fC;
    }
    if (--D_001E4FC4) {
        Elem *e = &D_00226E30[D_001E4FC4];
        if ((void *)a0 != (void *)e) {
            *(Elem *)a0 = *e;
        }
    }
}
