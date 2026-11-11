/* LEVEL_01.REL:0x001410 -- stores the caller's factor in the current record
   and passes it through the two conversion routines. */
typedef struct {
    char pad0[0xF8];
    float f_F8;
} Rec;

extern Rec *D_001EF248;

float func_07C0B8(float v);
void func_001458(float v);

void func_001410(float v)
{
    D_001EF248->f_F8 = v;
    func_001458(func_07C0B8(v));
}
