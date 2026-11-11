/* LEVEL_04:0x035EC8 -- placement copy of LEVEL_01_034880.c: spreads the arguments over the record and opens the
   sub record at 0x10; the tail of the body is the two-word comparator. */
typedef struct {
    int i0;
    int i4;
    char pad0[0x80 - 0x8];
    float f80;
} Rec;

extern void func_035C18(void *a0, float *m, float *t);

void func_035EC8(Rec *a0, int a1, float *a2, float *a3, int a4, int a5, float f12)
{
    a0->i4 = a4;
    a0->f80 = f12;
    a0->i0 = a5;
    func_035C18((char *)a0 + 0x10, a2, a3);
}

int func_035F00(int *a0, int *a1)
{
    return *a0 - *a1;
}
