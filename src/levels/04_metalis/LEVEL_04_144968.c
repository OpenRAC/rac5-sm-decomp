/* LEVEL_04:0x144968 -- initialises the global record D_003ABF40, calls
   func_11A9B0 with D_00234870 and stores the record's address in
   D_003ABF50. */
typedef struct {
    int f_00;
    int f_04;
    int f_08;
    float f_0C;
} Rec;

extern Rec D_003ABF40;
extern Rec *D_003ABF50;
extern int D_00234870;
extern Rec *func_11A9B0(int *p);

void func_144968(Rec *a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            Rec **out = &D_003ABF50;
            D_003ABF40.f_00 = 0;
            D_003ABF40.f_04 = 0;
            D_003ABF40.f_08 = 0;
            D_003ABF40.f_0C = 1.0f;
            *out = func_11A9B0(&D_00234870);
        }
    }
}
