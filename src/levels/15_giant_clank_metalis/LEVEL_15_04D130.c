/* LEVEL_15.REL:0x04D130 -- conditional reset of a global record.
   The float field is set to 1.0f, the three int fields to 0. */
typedef struct {
    int f00;
    int f04;
    int f08;
    float f0C;
} Rec;

extern Rec D_181010;

void func_04D130(void *p, int id)
{
    if (id == 0xFFFF && p != 0) {
        D_181010.f00 = 0;
        D_181010.f0C = 1.0f;
        D_181010.f08 = 0;
        D_181010.f04 = 0;
    }
}
