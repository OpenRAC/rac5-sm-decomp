/* LEVEL_01.REL:0x0A0B78 -- sets the two colour slots of the record and
   raises its flag byte. */
typedef struct {
    char pad0[0x8];
    float f_08;
    float f_0C;
} Rec;

extern Rec D_001F6710;
extern char D_001F6720;

void func_0A0B78(float r, float g)
{
    D_001F6720 = 1;
    D_001F6710.f_08 = r;
    D_001F6710.f_0C = g;
}
