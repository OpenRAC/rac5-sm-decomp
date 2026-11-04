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

extern Elem D_001EC780[1];
extern int D_001A3B14;
extern char D_00066138[1];

extern void func_06A4F0(void *a0, char *a1);

void func_065F90(Head *a0)
{
    func_06A4F0(a0->f0, &D_00066138);
    if (((Mid *)a0->f0)->f48->fDC == &D_00066138) {
        ((Mid *)a0->f0)->f48->fDC = a0->fC;
    }
    if (--D_001A3B14) {
        Elem *e = &D_001EC780[D_001A3B14];
        if ((void *)a0 != (void *)e) {
            *(Elem *)a0 = *e;
        }
    }
}
