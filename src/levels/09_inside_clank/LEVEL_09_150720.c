/* LEVEL_09:0x150720 -- placement copy of LEVEL_01_1590C8.c: records the object in a global slot, optionally runs a helper, then clears one status bit. */
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

extern unsigned int D_001F0F4C[];
extern void *D_002043F0;
extern void func_026DF0(void *a0, int a1, int a2);
extern void func_018500(char *a0, unsigned int a1, int a2);

void func_150720(Obj *a0)
{
    Inner *s1;

    s1 = a0->f_54;
    D_001F0F4C[0] = (unsigned int)a0;
    if (a0->f_60 != 0) {
        func_026DF0(D_002043F0, a0->f_60, 1);
    }
    func_018500((char *)a0, s1->f_04, 1);
    a0->f_64 &= 0xFFDFFFFFu;
}
