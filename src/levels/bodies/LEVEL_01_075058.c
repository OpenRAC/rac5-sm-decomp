/* LEVEL_01:0x075058 -- a spawner takes the next free slot of a table and
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

extern Elem D_0023A0B0[1];
extern int D_001F60C4;
extern char D_00075200[1];

extern void func_079568(void *a0, char *a1);

void func_075058(Head *a0)
{
    func_079568(a0->f0, &D_00075200);
    if (((Mid *)a0->f0)->f48->fDC == &D_00075200) {
        ((Mid *)a0->f0)->f48->fDC = a0->fC;
    }
    if (--D_001F60C4) {
        Elem *e = &D_0023A0B0[D_001F60C4];
        if ((void *)a0 != (void *)e) {
            *(Elem *)a0 = *e;
        }
    }
}
