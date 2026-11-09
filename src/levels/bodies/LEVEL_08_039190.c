/* LEVEL_08:0x039190 -- placement copy of LEVEL_04_035EC8.c: placement copy of LEVEL_01_034880.c: spreads the arguments over the record and opens the
   sub record at 0x10; the tail of the body is the two-word comparator. */
typedef struct {
    int i0;
    int i4;
    char pad0[0x80 - 0x8];
    float f80;
} Rec;

extern void func_038EB0(void *a0, float *m, float *t);

void func_039190(Rec *a0, int a1, float *a2, float *a3, int a4, int a5, float f12)
{
    a0->i4 = a4;
    a0->f80 = f12;
    a0->i0 = a5;
    func_038EB0((char *)a0 + 0x10, a2, a3);
}

int func_0391C8(int *a0, int *a1)
{
    return *a0 - *a1;
}
