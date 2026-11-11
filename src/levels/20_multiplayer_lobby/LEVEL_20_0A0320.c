/* LEVEL_20:0x0A0320 -- resets the level's record, then refreshes one of
   the two level objects depending on the caller's pointer. */
typedef struct {
    int i_00;
    int i_04;
    int i_08;
    float f_0C;
} Rec;

extern Rec D_19D1A8;
extern int D_19D1B8;
extern int D_19D1F0;

extern void func_0E4D00(int *p);
extern void func_09FE78(int *p);
extern void func_0A0270(int *p, int n);
extern void func_09FE50(int *p, int n);

void func_0A0320(Rec *a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_19D1A8.f_0C = 1.0f;
            D_19D1A8.i_00 = 0;
            D_19D1A8.i_08 = 0;
            D_19D1A8.i_04 = 0;
            func_0E4D00(&D_19D1B8);
            func_09FE78(&D_19D1F0);
        } else {
            func_0A0270(&D_19D1F0, 2);
            func_09FE50(&D_19D1B8, 2);
        }
    }
}
