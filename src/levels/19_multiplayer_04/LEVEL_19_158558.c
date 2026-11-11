/* LEVEL_19.REL:0x158558 -- fills a small record from the shared handle. */
typedef struct { int f_00; float f_04; int f_08; } Rec;
extern int D_001D5C98;
void func_158558(Rec *a0)
{
    a0->f_04 = 5.0f;
    a0->f_00 = D_001D5C98;
    a0->f_08 = 0;
}
