/* LEVEL_08:0x171C28 -- placement copy of LEVEL_01_160780.c: clears a pending pointer word, calls one helper, and calls a second helper unless a flag is set. */
struct Inner12 {
    char pad0[0x10];
    void *p10;
};

struct Obj12 {
    char pad0[0x54];
    struct Inner12 *p54;
};

void func_1CF0D8(void *p);
void func_0845F8(struct Obj12 *p, int v);
void func_208630(char *tab, struct Obj12 *p);
extern char D_003E4A60[];

void func_171C28(struct Obj12 *a0, void *a1, int a2)
{
    struct Inner12 *s1;

    s1 = a0->p54;
    if (s1->p10 != 0) {
        func_1CF0D8(s1->p10);
    }
    s1->p10 = 0;
    func_0845F8(a0, 1);
    if (a2 == 0) {
        func_208630(D_003E4A60, a0);
    }
}
