/* LEVEL_15:0x0B5720 -- initialises the global record D_002445E0 (three words
   and a float) and writes 4 or 5 into D_002445F0, depending on the value
   read in D_0016EF70. */
typedef struct {
    int f_00;
    int f_04;
    int f_08;
    float f_0C;
} Rec;

extern Rec D_002445E0;
extern int D_002445F0;
extern int D_0016EF70;

void func_0B5720(Rec *a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            int flag = D_0016EF70 ^ 0x18;
            int value = (flag == 0) ? 4 : 5;
            D_002445E0.f_00 = 0;
            D_002445E0.f_04 = 0;
            D_002445E0.f_08 = 0;
            D_002445E0.f_0C = 1.0f;
            D_002445F0 = value;
        }
    }
}
