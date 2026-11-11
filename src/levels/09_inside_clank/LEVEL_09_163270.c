/* LEVEL_09:0x163270 -- placement copy of LEVEL_01_16F970.c: sets a flag byte, then calls a helper once per index below a count from a linked record. */
typedef struct Sub Sub;

typedef struct {
    char pad_00[0x45];
    unsigned char f_45;
    char pad_46[0x58 - 0x46];
    Sub *f_58;
} Obj;

struct Sub {
    char pad_00[0x60];
    unsigned char f_60;
};

extern void func_163420(Sub *a0, unsigned int a1);

void func_163270(Obj *a0)
{
    Sub *s1;
    unsigned char i;

    s1 = a0->f_58;
    a0->f_45 = 3;
    if (s1->f_60 != 0) {
        i = 0;
        do {
            func_163420(s1, i);
            i = (unsigned char)(i + 1);
        } while (i < s1->f_60);
    }
}
