/* LEVEL_10:0x156C38 -- placement copy of LEVEL_01_1590C8.c: records the object in a global slot, optionally runs a helper, then clears one status bit. */
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

extern unsigned int D_002100C4[];
extern void *D_00223780;
extern void func_0276C8(void *a0, int a1, int a2);
extern void func_018728(char *a0, unsigned int a1, int a2);

void func_156C38(Obj *a0)
{
    Inner *s1;

    s1 = a0->f_54;
    D_002100C4[0] = (unsigned int)a0;
    if (a0->f_60 != 0) {
        func_0276C8(D_00223780, a0->f_60, 1);
    }
    func_018728((char *)a0, s1->f_04, 1);
    a0->f_64 &= 0xFFDFFFFFu;
}
