/* LEVEL_16.REL:0x164018 -- initialises the record's tail when the caller gives a
   live pointer and the id 0xFFFF. */
typedef struct {
    int f_00;
    int f_04;
    int f_08;
    float f_0C;
} Rec;

extern Rec D_002E53A0;

void func_164018(void *a0, int a1)
{
    if (a1 == 0xFFFF && a0 != 0) {
        D_002E53A0.f_00 = 0;
        D_002E53A0.f_0C = 1.0f;
        D_002E53A0.f_08 = 0;
        D_002E53A0.f_04 = 0;
    }
}
