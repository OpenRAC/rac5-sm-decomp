/* LEVEL_08.REL:0x0886C0 -- relays the first handle and the three angles of the
   second to func_137490. */
typedef struct {
    char pad0[0x30];
    float f_30;
    float f_34;
    float f_38;
} Obj;

void func_137490(void *a0, float f0, float f1, float f2);

void func_0886C0(Obj *a0, void *a1)
{
    func_137490(a1, a0->f_30, a0->f_34, a0->f_38);
}
