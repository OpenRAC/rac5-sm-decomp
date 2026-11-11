/* LEVEL_04:0x167AD8 -- placement copy of LEVEL_01_1590C8.c: records the object in a global slot, optionally runs a helper, then clears one status bit. */
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

extern unsigned int D_00220BD4[];
extern void *D_00234170;
extern void func_027A78(void *a0, int a1, int a2);
extern void func_018DF8(char *a0, unsigned int a1, int a2);

void func_167AD8(Obj *a0)
{
    Inner *s1;

    s1 = a0->f_54;
    D_00220BD4[0] = (unsigned int)a0;
    if (a0->f_60 != 0) {
        func_027A78(D_00234170, a0->f_60, 1);
    }
    func_018DF8((char *)a0, s1->f_04, 1);
    a0->f_64 &= 0xFFDFFFFFu;
}
