/* LEVEL_04:0x0775F0 -- a spawner takes the next free slot of a table and
   copies the slot's payload into the spawner itself. */
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

extern Elem D_002548C0[1];
extern char D_00210000[];
extern char D_00077798[1];

extern void func_07C270(void *a0, char *a1);

void func_0775F0(Head *a0)
{
    func_07C270(a0->f0, &D_00077798);
    if (((Mid *)a0->f0)->f48->fDC == &D_00077798) {
        ((Mid *)a0->f0)->f48->fDC = a0->fC;
    }
    if (--*(int *)(D_00210000 - 0xA7C)) {
        Elem *e = &D_002548C0[*(int *)(D_00210000 - 0xA7C)];
        if ((void *)a0 != (void *)e) {
            *(Elem *)a0 = *e;
        }
    }
}
