/* LEVEL_18:0x001078 -- stores the argument, then feeds the pair of calls. */
typedef struct {
    char pad[0xF8];
    float f_F8;
} Obj;

extern Obj *D_0019C14C;
extern float func_06EA70(float f12);
extern void func_0010C0(float f12);

void func_001078(float x)
{
    D_0019C14C->f_F8 = x;
    func_0010C0(func_06EA70(x));
}
