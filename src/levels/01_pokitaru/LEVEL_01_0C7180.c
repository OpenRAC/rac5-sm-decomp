/* LEVEL_01:0x0C7180 -- resets the level's record, then refreshes one of
   the two level objects depending on the caller's pointer. */
typedef struct {
    int i_00;
    int i_04;
    int i_08;
    float f_0C;
} Rec;

extern Rec D_32BA28;
extern int D_32BA38;
extern int D_32BA70;

extern void func_135848(int *p);
extern void func_0C6CD8(int *p);
extern void func_0C70D0(int *p, int n);
extern void func_0C6CB0(int *p, int n);

void func_0C7180(Rec *a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_32BA28.f_0C = 1.0f;
            D_32BA28.i_00 = 0;
            D_32BA28.i_08 = 0;
            D_32BA28.i_04 = 0;
            func_135848(&D_32BA38);
            func_0C6CD8(&D_32BA70);
        } else {
            func_0C70D0(&D_32BA70, 2);
            func_0C6CB0(&D_32BA38, 2);
        }
    }
}
