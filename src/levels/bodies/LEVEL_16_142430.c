/* LEVEL_16.REL:0x142430 -- initialises the record's tail when the caller gives a
   live pointer and the id 0xFFFF. */
typedef struct {
    int f_00;
    int f_04;
    int f_08;
    float f_0C;
} Rec;

extern Rec D_002E4A40;

void func_142430(void *a0, int a1)
{
    if (a1 == 0xFFFF && a0 != 0) {
        D_002E4A40.f_00 = 0;
        D_002E4A40.f_0C = 1.0f;
        D_002E4A40.f_08 = 0;
        D_002E4A40.f_04 = 0;
    }
}
