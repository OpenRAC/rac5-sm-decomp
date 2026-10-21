/* LEVEL_06:0x0C8AF8 -- initialises a global record: three cleared words,
   1.0f in the record and a neighbouring float copied from another global. */
typedef struct {
    int f_00;
    int f_04;
    int f_08;
    float f_0C;
} Rec;

extern Rec D_00318E80;
extern float D_00318E90;
extern float D_001F1B94;

void func_0C8AF8(void *a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_00318E80.f_0C = 1.0f;
            D_00318E80.f_00 = 0;
            D_00318E90 = D_001F1B94;
            D_00318E80.f_08 = 0;
            D_00318E80.f_04 = 0;
        }
    }
}
