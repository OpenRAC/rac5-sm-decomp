/* LEVEL_01:0x0CE1F8 -- when the request is the special one, resets the
   global record: three zero words, a one, and the float read from 0x202C94
   copied into the float that follows the record. */
typedef struct {
    int f_00;
    int f_04;
    int f_08;
    float f_0C;
} Rec;

extern Rec D_0032C100;
extern float D_0032C110;
extern float D_00202C94;

void func_0CE1F8(void *a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_0032C100.f_00 = 0;
            D_0032C100.f_04 = 0;
            D_0032C100.f_08 = 0;
            D_0032C100.f_0C = 1.0f;
            D_0032C110 = D_00202C94;
        }
    }
}
