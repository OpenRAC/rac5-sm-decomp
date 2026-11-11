/* LEVEL_01:0x160780 -- clears a pending pointer word, calls one helper, and calls a second helper unless a flag is set. */
struct Inner12 {
    char pad0[0x10];
    void *p10;
};

struct Obj12 {
    char pad0[0x54];
    struct Inner12 *p54;
};

void func_19CA58(void *p);
void func_07C670(struct Obj12 *p, int v);
void func_1CD828(char *tab, struct Obj12 *p);
extern char D_00395728[];

void func_160780(struct Obj12 *a0, void *a1, int a2)
{
    struct Inner12 *s1;

    s1 = a0->p54;
    if (s1->p10 != 0) {
        func_19CA58(s1->p10);
    }
    s1->p10 = 0;
    func_07C670(a0, 1);
    if (a2 == 0) {
        func_1CD828(D_00395728, a0);
    }
}
