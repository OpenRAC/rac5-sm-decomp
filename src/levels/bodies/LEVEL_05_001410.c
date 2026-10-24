/* LEVEL_05.REL:0x001410 -- stores the caller's factor in the current record
   and passes it through the two conversion routines. */
typedef struct {
    char pad0[0xF8];
    float f_F8;
} Rec;

extern Rec *D_001DE5C8;

float func_079740(float v);
void func_001458(float v);

void func_001410(float v)
{
    D_001DE5C8->f_F8 = v;
    func_001458(func_079740(v));
}
