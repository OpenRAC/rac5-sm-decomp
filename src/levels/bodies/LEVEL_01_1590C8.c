/* LEVEL_01:0x1590C8 -- records the object in a global slot, optionally runs a helper, then clears one status bit. */
typedef struct {
    char pad_00[0x04];
    unsigned char f_04;
} Inner;

typedef struct {
    char pad_00[0x54];
    Inner *f_54;
    char pad_58[0x60 - 0x58];
    int f_60;
    unsigned int f_64;
} Obj;

extern unsigned int D_0020746C[];
extern void *D_0021A7F0;
extern void func_027DE8(void *a0, int a1, int a2);
extern void func_019098(char *a0, unsigned int a1, int a2);

void func_1590C8(Obj *a0)
{
    Inner *s1;

    s1 = a0->f_54;
    D_0020746C[0] = (unsigned int)a0;
    if (a0->f_60 != 0) {
        func_027DE8(D_0021A7F0, a0->f_60, 1);
    }
    func_019098((char *)a0, s1->f_04, 1);
    a0->f_64 &= 0xFFDFFFFFu;
}
