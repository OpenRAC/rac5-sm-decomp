/* LEVEL_03:0x15A788 -- placement copy of LEVEL_01_160780.c: clears a pending pointer word, calls one helper, and calls a second helper unless a flag is set. */
struct Inner12 {
    char pad0[0x10];
    void *p10;
};

struct Obj12 {
    char pad0[0x54];
    struct Inner12 *p54;
};

void func_1AFB28(void *p);
void func_07C468(struct Obj12 *p, int v);
void func_1DE448(char *tab, struct Obj12 *p);
extern char D_003B0530[];

void func_15A788(struct Obj12 *a0, void *a1, int a2)
{
    struct Inner12 *s1;

    s1 = a0->p54;
    if (s1->p10 != 0) {
        func_1AFB28(s1->p10);
    }
    s1->p10 = 0;
    func_07C468(a0, 1);
    if (a2 == 0) {
        func_1DE448(D_003B0530, a0);
    }
}
