/* LEVEL_15:0x0FDC38 -- asks the erased routine for a float and stores it in
   the caller's record at +0x0C. */
typedef struct {
    char pad[8];
    float f_08;
    float f_0C;
} Rec;

extern float func_000000(float a0);

void func_0FDC38(Rec *a0)
{
    a0->f_0C = func_000000(-a0->f_08);
}
