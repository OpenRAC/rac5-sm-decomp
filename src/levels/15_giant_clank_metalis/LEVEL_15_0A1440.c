/* LEVEL_15.REL:0x0A1440 -- conditional reset of a global record.
   The float field is set to 1.0f, the three int fields to 0. */
typedef struct {
    int f00;
    int f04;
    int f08;
    float f0C;
} Rec;

extern Rec D_240740;

void func_0A1440(void *p, int id)
{
    if (id == 0xFFFF && p != 0) {
        D_240740.f00 = 0;
        D_240740.f0C = 1.0f;
        D_240740.f08 = 0;
        D_240740.f04 = 0;
    }
}
