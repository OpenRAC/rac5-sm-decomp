/* LEVEL_19.REL:0x001008 -- parks the float argument at +0xF8 of the object the
   global at 0x0019BE4C points at, then feeds that same value through
   func_06F410 and func_001050. */
typedef struct {
    unsigned char pad0[0xF8];
    float v_F8;
} Obj;

extern Obj *D_0019BE4C;

extern float func_06F410(float value);
extern void func_001050(float value);

void func_001008(float value)
{
    D_0019BE4C->v_F8 = value;
    func_001050(func_06F410(value));
}
