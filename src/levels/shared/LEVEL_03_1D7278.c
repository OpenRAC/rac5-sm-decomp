/* LEVEL_03.REL:0x1D7278 -- conditional reset of a global record.
   The float field is set to 1.0f, the three int fields to 0. */
typedef struct {
    int f00;
    int f04;
    int f08;
    float f0C;
} Rec;

extern Rec D_3B38E0;

void func_1D7278(void *p, int id)
{
    if (id == 0xFFFF && p != 0) {
        D_3B38E0.f00 = 0;
        D_3B38E0.f0C = 1.0f;
        D_3B38E0.f08 = 0;
        D_3B38E0.f04 = 0;
    }
}
