/* LEVEL_04.REL:0x0B7EF8 -- conditional reset of a global record.
   The float field is set to 1.0f, the three int fields to 0. */
typedef struct {
    int f00;
    int f04;
    int f08;
    float f0C;
} Rec;

extern Rec D_3421D8;

void func_0B7EF8(void *p, int id)
{
    if (id == 0xFFFF && p != 0) {
        D_3421D8.f00 = 0;
        D_3421D8.f0C = 1.0f;
        D_3421D8.f08 = 0;
        D_3421D8.f04 = 0;
    }
}
