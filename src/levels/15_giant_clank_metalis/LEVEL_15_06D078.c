/* LEVEL_15.REL:0x06D078 -- conditional reset of a global record.
   The float field is set to 1.0f, the three int fields to 0. */
typedef struct {
    int f00;
    int f04;
    int f08;
    float f0C;
} Rec;

extern Rec D_183840;

void func_06D078(void *p, int id)
{
    if (id == 0xFFFF && p != 0) {
        D_183840.f00 = 0;
        D_183840.f0C = 1.0f;
        D_183840.f08 = 0;
        D_183840.f04 = 0;
    }
}
