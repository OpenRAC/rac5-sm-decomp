/* LEVEL_23:0x129CA0 -- resets the global record D_362C80 and stores the
   result of func_101CB0 into D_362C90. */
typedef struct {
    int i_00;
    int i_04;
    int i_08;
    float f_0C;
} Rec;

extern Rec D_362C80;
extern int *D_362C90;
extern int D_1EDE70;
extern int *func_101CB0(int *p);

void func_129CA0(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            int **dst = &D_362C90;
            D_362C80.f_0C = 1.0f;
            D_362C80.i_00 = 0;
            D_362C80.i_08 = 0;
            D_362C80.i_04 = 0;
            *dst = func_101CB0(&D_1EDE70);
        }
    }
}
