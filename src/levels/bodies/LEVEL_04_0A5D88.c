/* LEVEL_04.REL:0x0A5D88 -- sets the two colour slots of the record and
   raises its flag byte. */
typedef struct {
    char pad0[0x8];
    float f_08;
    float f_0C;
} Rec;

extern Rec D_0020FBD0;
extern char D_0020FBE0;

void func_0A5D88(float r, float g)
{
    D_0020FBE0 = 1;
    D_0020FBD0.f_08 = r;
    D_0020FBD0.f_0C = g;
}
