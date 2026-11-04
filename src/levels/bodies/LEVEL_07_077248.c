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

extern Elem D_0024F9B0[1];
extern int D_0020A3C4;
extern char D_000773F0[1];

extern void func_07B758(void *a0, char *a1);

void func_077248(Head *a0)
{
    func_07B758(a0->f0, &D_000773F0);
    if (((Mid *)a0->f0)->f48->fDC == &D_000773F0) {
        ((Mid *)a0->f0)->f48->fDC = a0->fC;
    }
    if (--D_0020A3C4) {
        Elem *e = &D_0024F9B0[D_0020A3C4];
        if ((void *)a0 != (void *)e) {
            *(Elem *)a0 = *e;
        }
    }
}
