/* LEVEL_10:0x159300 -- placement copy of LEVEL_01_160780.c: clears a pending pointer word, calls one helper, and calls a second helper unless a flag is set. */
struct Inner12 {
    char pad0[0x10];
    void *p10;
};

struct Obj12 {
    char pad0[0x54];
    struct Inner12 *p54;
};

void func_1A46D0(void *p);
void func_07CCA0(struct Obj12 *p, int v);
void func_1D1AD0(char *tab, struct Obj12 *p);
extern char D_0039E9E0[];

void func_159300(struct Obj12 *a0, void *a1, int a2)
{
    struct Inner12 *s1;

    s1 = a0->p54;
    if (s1->p10 != 0) {
        func_1A46D0(s1->p10);
    }
    s1->p10 = 0;
    func_07CCA0(a0, 1);
    if (a2 == 0) {
        func_1D1AD0(D_0039E9E0, a0);
    }
}
