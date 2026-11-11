/* LEVEL_16:0x001630 -- dispatches on the mode field of the record. */
typedef struct {
    float f_00;
    float f_04;
    char pad_08[8];
    int f_10;
} Rec;

extern void func_001538(Rec *a0, float a1, float a2);

void func_001630(Rec *a0, float a2)
{
    switch (a0->f_10) {
    case 0:
        func_001538(a0, a2, a0->f_04);
        break;
    case 1:
        a0->f_00 = a0->f_00 + a2 * a0->f_04;
        break;
    }
}
