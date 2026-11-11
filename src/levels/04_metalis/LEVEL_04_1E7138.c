/* LEVEL_04:0x1E7138 -- decrements a counter when a flag byte is clear, then clears a pointer field. */
struct S1E7138 {
    char pad0[0x20];
    char *f20;
    char pad24[5];
    unsigned char b29;
};

extern int D_0022286C;
extern void func_083F98(char *a);

void func_1E7138(struct S1E7138 *p)
{
    char *a;

    if (p->b29 == 0) {
        D_0022286C = D_0022286C - 1;
    }
    a = p->f20;
    if (a != 0) {
        func_083F98(a);
        p->f20 = 0;
    }
}
