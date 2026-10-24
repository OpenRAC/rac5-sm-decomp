/* LEVEL_10:0A1C90 -- sets the flag at D_001FF720 and stores the two floats in
   the record D_001FF710 (8 then 12). */
typedef struct {
    char pad_08[8];
    float f_08;
    float f_0C;
} Rec;

extern Rec D_001FF710;
extern char D_001FF720;

void func_0A1C90(float a, float b)
{
    D_001FF720 = 1;
    D_001FF710.f_08 = a;
    D_001FF710.f_0C = b;
}
