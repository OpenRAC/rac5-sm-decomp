/* LEVEL_07:0x012A20 -- when the request is the special one, resets the
   global record: three zero words, a one and a thirtieth in the float that
   follows the record. */
typedef struct {
    int f_00;
    int f_04;
    int f_08;
    float f_0C;
} Rec;

extern Rec D_00244E58;
extern float D_00244E68;

void func_012A20(void *a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_00244E58.f_00 = 0;
            D_00244E58.f_04 = 0;
            D_00244E58.f_08 = 0;
            D_00244E58.f_0C = 1.0f;
            D_00244E68 = 1.0f / 30.0f;
        }
    }
}
