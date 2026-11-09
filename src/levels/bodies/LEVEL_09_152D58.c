/* LEVEL_09:0x152D58 -- placement copy of LEVEL_01_160780.c: clears a pending pointer word, calls one helper, and calls a second helper unless a flag is set. */
struct Inner12 {
    char pad0[0x10];
    void *p10;
};

struct Obj12 {
    char pad0[0x54];
    struct Inner12 *p54;
};

void func_192288(void *p);
void func_079108(struct Obj12 *p, int v);
void func_1B3D48(char *tab, struct Obj12 *p);
extern char D_0037CDA0[];

void func_152D58(struct Obj12 *a0, void *a1, int a2)
{
    struct Inner12 *s1;

    s1 = a0->p54;
    if (s1->p10 != 0) {
        func_192288(s1->p10);
    }
    s1->p10 = 0;
    func_079108(a0, 1);
    if (a2 == 0) {
        func_1B3D48(D_0037CDA0, a0);
    }
}
