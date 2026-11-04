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

extern Elem D_001ECB00[1];
extern int D_001A4F94;
extern char D_00065988[1];

extern void func_069C28(void *a0, char *a1);

void func_0657E0(Head *a0)
{
    func_069C28(a0->f0, &D_00065988);
    if (((Mid *)a0->f0)->f48->fDC == &D_00065988) {
        ((Mid *)a0->f0)->f48->fDC = a0->fC;
    }
    if (--D_001A4F94) {
        Elem *e = &D_001ECB00[D_001A4F94];
        if ((void *)a0 != (void *)e) {
            *(Elem *)a0 = *e;
        }
    }
}
