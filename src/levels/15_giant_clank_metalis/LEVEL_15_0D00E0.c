/* LEVEL_15.REL:0x0D00E0 -- initialises the record's tail when the caller gives a
   live pointer and the id 0xFFFF. */
typedef struct {
    int f_00;
    int f_04;
    int f_08;
    float f_0C;
} Rec;

extern Rec D_00248CF8;

void func_0D00E0(void *a0, int a1)
{
    if (a1 == 0xFFFF && a0 != 0) {
        D_00248CF8.f_00 = 0;
        D_00248CF8.f_0C = 1.0f;
        D_00248CF8.f_08 = 0;
        D_00248CF8.f_04 = 0;
    }
}
