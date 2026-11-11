typedef struct { char pad_00[0x8]; char *p_08; } Doc;
typedef struct { char pad_00[0x2F]; unsigned char b_2F; } Ctx;
typedef struct {
    char pad_00[0x4];
    int f_04;
    int f_08;
    float f_0C;
    Doc *f_10;
    int f_14;
    int f_18;
    float f_1C;
    int f_20;
    unsigned char b_24;
} Rec;
void func_0708C8(Rec *r);
int func_06E290(Ctx *a0, Rec *a1)
{
    int i;
    a1->f_1C = 1.0f;
    a1->f_0C = -1.0f;
    a1->f_14 = 0;
    a1->f_18 = 0;
    a1->b_24 = 0;
    a1->f_04 = (int)a0;
    a1->f_08 = 0;
    a1->f_20 = 0;
    if (a1->f_10 == 0)
        func_0708C8(a1);
    if (a0 != 0 && a1->f_10 != 0) {
        for (i = 0; i < a0->b_2F; i++) {
            ((int *)a1->f_10->p_08)[i * 0x1C] = 0;
            ((int *)a1->f_10->p_08)[i * 0x1C + 3] = 0;
        }
    }
    return 1;
}
