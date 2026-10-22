/* LEVEL_05:0x162090 -- resets the level's record and stores the pointer the
   level routine returns. */
typedef struct {
    int i_00;
    int i_04;
    int i_08;
    float f_0C;
} Rec;

extern Rec D_381BA8;
extern Rec *D_381BB8;
extern int D_20E778;

extern Rec *func_10B888(int *p);

void func_162090(Rec *a0, int a1)
{
    Rec **pp;

    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_381BA8.f_0C = 1.0f;
            D_381BA8.i_00 = 0;
            D_381BA8.i_08 = 0;
            D_381BA8.i_04 = 0;
            pp = &D_381BB8;
            *pp = func_10B888(&D_20E778);
        }
    }
}
