/* LEVEL_15:0x011788 -- calls func_0E6508 on the global object
   D_177720 with three floats. */
typedef struct {
    int pad_00;
} Obj;

extern Obj D_177720;
extern float D_1776E8;
extern void func_0E6508(Obj *a, float b, float c, float d);

void func_011788(void)
{
    func_0E6508(&D_177720, 62.831852f, 20.0f, D_1776E8);
}
