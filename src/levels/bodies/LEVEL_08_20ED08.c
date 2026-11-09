/* LEVEL_08:0x20ED08 -- placement copy of LEVEL_04_1E7138.c: decrements a counter when a flag byte is clear, then clears a pointer field. */
struct S1E7138 {
    char pad0[0x20];
    char *f20;
    char pad24[5];
    unsigned char b29;
};

extern int D_00252A6C;
extern void func_088AA8(char *a);

void func_20ED08(struct S1E7138 *p)
{
    char *a;

    if (p->b29 == 0) {
        D_00252A6C = D_00252A6C - 1;
    }
    a = p->f20;
    if (a != 0) {
        func_088AA8(a);
        p->f20 = 0;
    }
}
