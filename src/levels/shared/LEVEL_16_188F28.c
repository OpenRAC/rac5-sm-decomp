/* LEVEL_16.REL:0x188F28 -- initialises the record's tail when the caller gives a
   live pointer and the id 0xFFFF. */
typedef struct {
    int f_00;
    int f_04;
    int f_08;
    float f_0C;
} Rec;

extern Rec D_002E5D38;

void func_188F28(void *a0, int a1)
{
    if (a1 == 0xFFFF && a0 != 0) {
        D_002E5D38.f_00 = 0;
        D_002E5D38.f_0C = 1.0f;
        D_002E5D38.f_08 = 0;
        D_002E5D38.f_04 = 0;
    }
}
