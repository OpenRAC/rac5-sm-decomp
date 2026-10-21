/* LEVEL_07:0x034DB0 -- stores the fifth and sixth arguments in the caller's
   record, passes three pointers to the local routine func_034B00; the module
   then holds a second, tiny function right after it. */
typedef struct {
    int f_00;
    int f_04;
    char pad[0x78];
    float f_80;
} Rec;

extern void func_034B00(Rec *a, Rec *b, Rec *c);

void func_034DB0(Rec *a0, int a1, Rec *a2, Rec *a3, float a4, int a5, int a6)
{
    a0->f_04 = a5;
    a0->f_80 = a4;
    a0->f_00 = a6;
    func_034B00((Rec *)((char *)a0 + 0x10), a2, a3);
}

int func_034DE8(int *a0, int *a1)
{
    return *a0 - *a1;
}
