/* LEVEL_07.REL:0x16B608 -- when the caller's handle is 0xFFFF and the object
   is set, restores the two default floats of the record at 0x3AAFD0. */
typedef struct {
    int f_00;
    int f_04;
    int f_08;
    float f_0C;
} Rec;

extern Rec D_003AAFD0;
extern float D_003AAFE0;

void func_16B608(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_003AAFD0.f_0C = 1.0f;
            D_003AAFE0 = 100.0f;
            D_003AAFD0.f_00 = 0;
            D_003AAFD0.f_08 = 0;
            D_003AAFD0.f_04 = 0;
        }
    }
}
