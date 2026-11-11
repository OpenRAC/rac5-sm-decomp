/* LEVEL_15:0x0FE260 -- builds a reference vector and initialises two tables of records from static data. */
typedef struct Vec { int w[8]; } Vec;
typedef struct A { int f0; char pad4[4]; char f8[0x78]; } A;
typedef struct Rec { char pad[0x60]; } Rec;
extern A D_0016F838[];
extern char D_0015BD34[];
extern Rec D_002ECDD8[];
extern Rec D_002ECE98[];
extern void func_029480(Vec *v, unsigned a, unsigned b, int c);
extern void func_029468(Vec *v);
extern void func_120330(Rec *r, int a, Vec *v, char *p);
extern void func_0FC878(char *p);
extern void func_0FC960(Rec *r, int a, Vec *v, char *p);

void func_0FE260(void)
{
    Vec v;
    unsigned i;
    A *a;
    char *b;
    Rec *r;
    Rec *r0;

    func_029480(&v, 0xFFFFFFFF, 0xFFFFFFFF, 0);
    func_029468(&v);
    for (i = 0; i < 2; i++)
        func_120330(&D_002ECDD8[i], D_0016F838[i].f0, &v, D_0016F838[i].f8);
    r = D_002ECE98;
    b = D_0015BD34;
    r0 = r;
    do {
        func_0FC878(b);
        func_0FC960(r, *(int *)(b - 12), &v, b);
        r++;
        b += 0x154;
    } while (r == r0);
}
