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

extern Elem D_00207530[1];
extern int D_001C94C4;
extern char D_0006EEF8[1];

extern void func_070840(void *a0, char *a1);

void func_06ED50(Head *a0)
{
    func_070840(a0->f0, &D_0006EEF8);
    if (((Mid *)a0->f0)->f48->fDC == &D_0006EEF8) {
        ((Mid *)a0->f0)->f48->fDC = a0->fC;
    }
    if (--D_001C94C4) {
        Elem *e = &D_00207530[D_001C94C4];
        if ((void *)a0 != (void *)e) {
            *(Elem *)a0 = *e;
        }
    }
}
