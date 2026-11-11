/* LEVEL_17:0x001008 -- stores the parameter and forwards its rounding. */
typedef struct {
    char pad[0xF8];
    float f_F8;
} Obj;

extern Obj *D_18E2CC;
extern float func_06F9E0(float v);
extern void func_001050(float v);

void func_001008(float v)
{
    D_18E2CC->f_F8 = v;
    func_001050(func_06F9E0(v));
}
