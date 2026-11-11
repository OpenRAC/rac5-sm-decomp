/* LEVEL_15.REL:0x059D08 -- conditional reset of a global record.
   The float field is set to 1.0f, the three int fields to 0. */
typedef struct {
    int f00;
    int f04;
    int f08;
    float f0C;
} Rec;

extern Rec D_181340;

void func_059D08(void *p, int id)
{
    if (id == 0xFFFF && p != 0) {
        D_181340.f00 = 0;
        D_181340.f0C = 1.0f;
        D_181340.f08 = 0;
        D_181340.f04 = 0;
    }
}
