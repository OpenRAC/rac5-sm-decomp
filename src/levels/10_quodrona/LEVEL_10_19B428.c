typedef struct {
    float x, y, z;
} V3;

typedef struct {
    char pad[0xC0];
    int fC0;
    char pad2[0xC];
    int fD0;
    V3 vec;
} D;

typedef struct {
    char pad[0x40];
    void *f40;
    char pad2[0x14];
    D *f58;
} S;

extern void func_19B4E0(S *, int);

int func_19B428(S *t0, int a1, V3 *a2, int a3)
{
    D *v0;
    V3 *p;

    if (*(int *)((char *)t0->f40 + 0x24) != 0xB8515E6D)
        return 0;

    v0 = t0->f58;
    v0->fC0 = a1;
    p = &v0->vec;
    p->x = a2->x;
    p->y = a2->y;
    p->z = a2->z;
    v0->fD0 = a3;
    func_19B4E0(t0, 3);
    return 1;
}
