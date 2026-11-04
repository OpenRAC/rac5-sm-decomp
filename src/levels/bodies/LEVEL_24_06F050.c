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

extern Elem D_00205FB0[1];
extern int D_001C6D44;
extern char D_0006F1F8[1];

extern void func_073CD0(void *a0, char *a1);

void func_06F050(Head *a0)
{
    func_073CD0(a0->f0, &D_0006F1F8);
    if (((Mid *)a0->f0)->f48->fDC == &D_0006F1F8) {
        ((Mid *)a0->f0)->f48->fDC = a0->fC;
    }
    if (--D_001C6D44) {
        Elem *e = &D_00205FB0[D_001C6D44];
        if ((void *)a0 != (void *)e) {
            *(Elem *)a0 = *e;
        }
    }
}
