/* LEVEL_20:0x02B088 -- stores two words and a float into the record, then
   hands the sub-record at +0x10 to func_02ADD8 with the two middle
   arguments. 0x02B0C0 is a compare-by-subtraction helper. */
typedef struct {
    int f_00;
    int f_04;
    char pad_08[0x08];
    char f_10[0x70];
    float f_80;
} Rec;

extern void func_02ADD8(char *p, int a, int b);

void func_02B088(Rec *a0, int a1, int a2, int a3, int a4, int a5, float f)
{
    a0->f_04 = a4;
    a0->f_80 = f;
    a0->f_00 = a5;
    func_02ADD8(a0->f_10, a2, a3);
}

int func_02B0C0(int *a0, int *a1)
{
    return *a0 - *a1;
}
