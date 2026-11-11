/* LEVEL_03.REL:0x0A08F8 -- sets the two colour slots of the record and
   raises its flag byte. */
typedef struct {
    char pad0[0x8];
    float f_08;
    float f_0C;
} Rec;

extern Rec D_0020ED90;
extern char D_0020EDA0;

void func_0A08F8(float r, float g)
{
    D_0020EDA0 = 1;
    D_0020ED90.f_08 = r;
    D_0020ED90.f_0C = g;
}
