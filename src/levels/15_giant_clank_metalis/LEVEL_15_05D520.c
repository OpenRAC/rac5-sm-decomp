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

extern Elem D_00182118[1];
extern int D_0014AD44;
extern char D_0005D6C8[1];

extern void func_05E610(void *a0, int target);

void func_05D520(Head *a0)
{
    func_05E610(a0->f0, (int)&D_0005D6C8);
    if (((Mid *)a0->f0)->f48->fDC == &D_0005D6C8) {
        ((Mid *)a0->f0)->f48->fDC = a0->fC;
    }
    if (--D_0014AD44) {
        Elem *e = &D_00182118[D_0014AD44];
        if ((void *)a0 != (void *)e) {
            *(Elem *)a0 = *e;
        }
    }
}
