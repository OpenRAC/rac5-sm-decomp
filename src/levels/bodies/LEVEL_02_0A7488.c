/* LEVEL_02:0A7488 -- sets the flag at D_0020B6E0 and stores the two floats in
   the record D_0020B6D0 (8 then 12). */
typedef struct {
    char pad_08[8];
    float f_08;
    float f_0C;
} Rec;

extern Rec D_0020B6D0;
extern char D_0020B6E0;

void func_0A7488(float a, float b)
{
    D_0020B6E0 = 1;
    D_0020B6D0.f_08 = a;
    D_0020B6D0.f_0C = b;
}
