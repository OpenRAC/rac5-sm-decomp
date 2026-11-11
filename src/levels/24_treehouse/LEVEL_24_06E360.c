/* LEVEL_24.REL:06E360 -- forwards the record a1 of the table D_001E9AD8 to
   the shared routine, the caller's float going out as the second floating
   argument. */
typedef struct {
    int w_00;
    float f_04;
    int w_08;
    int w_0C;
} Rec;

extern Rec D_001E9AD8;

extern void func_06E1A8(int a0, int a1, int a2, int a3, float f1, float f2);

void func_06E360(int a0, int a1, int a2, int a3, float x)
{
    Rec *p = &D_001E9AD8 + a1;

    func_06E1A8(a0, a2, a3, p->w_0C, p->f_04, x);
}
