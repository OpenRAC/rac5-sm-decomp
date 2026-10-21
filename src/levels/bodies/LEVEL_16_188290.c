/* LEVEL_16.REL:0x188290 -- conditional reset of a global record.
   The float field is set to 1.0f, the three int fields to 0. */
typedef struct {
    int f00;
    int f04;
    int f08;
    float f0C;
} Rec;

extern Rec D_2E5D28;

void func_188290(void *p, int id)
{
    if (id == 0xFFFF && p != 0) {
        D_2E5D28.f00 = 0;
        D_2E5D28.f0C = 1.0f;
        D_2E5D28.f08 = 0;
        D_2E5D28.f04 = 0;
    }
}
