/* LEVEL_08.REL:0x1C55E0 -- seeds the caller's three words from the defaults. */
typedef struct {
    int f_00;
    float f_04;
    int f_08;
} Rec;

extern int D_00271B98;

void func_1C55E0(Rec *a0)
{
    a0->f_04 = 5.0f;
    a0->f_00 = D_00271B98;
    a0->f_08 = 0;
}
