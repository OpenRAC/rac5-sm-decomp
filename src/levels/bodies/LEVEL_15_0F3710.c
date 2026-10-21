/* LEVEL_15.REL:0x0F3710 -- initialises the record's tail when the caller gives a
   live pointer and the id 0xFFFF. */
typedef struct {
    int f_00;
    int f_04;
    int f_08;
    float f_0C;
} Rec;

extern Rec D_0029F170;

void func_0F3710(void *a0, int a1)
{
    if (a1 == 0xFFFF && a0 != 0) {
        D_0029F170.f_00 = 0;
        D_0029F170.f_0C = 1.0f;
        D_0029F170.f_08 = 0;
        D_0029F170.f_04 = 0;
    }
}
