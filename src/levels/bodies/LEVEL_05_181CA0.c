/* LEVEL_05:0x181CA0 -- initialises a global record: three cleared words,
   then 1.0f in the record and 9.0f in a neighbouring float. */
typedef struct {
    int f_00;
    int f_04;
    int f_08;
    float f_0C;
} Rec;

extern Rec D_00383760;
extern float D_00383770;

void func_181CA0(void *a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_00383760.f_0C = 1.0f;
            D_00383770 = 9.0f;
            D_00383760.f_00 = 0;
            D_00383760.f_08 = 0;
            D_00383760.f_04 = 0;
        }
    }
}
