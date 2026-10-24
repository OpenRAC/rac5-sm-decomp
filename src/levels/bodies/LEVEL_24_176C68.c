/* LEVEL_24.REL:0x176C68 -- fills the caller's three-slot record. */
typedef struct {
    int f_00;
    float f_04;
    int f_08;
} Rec;

extern int D_001F21A8;

void func_176C68(Rec *a0)
{
    a0->f_04 = 5.0f;
    a0->f_00 = D_001F21A8;
    a0->f_08 = 0;
}
