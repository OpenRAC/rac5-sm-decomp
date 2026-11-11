/* LEVEL_04:0x076900 -- table-driven forwarder: the indexed record gives
   the fourth integer argument and the first float argument of the callee,
   the two pointers and the float of the caller follow. */
typedef struct {
    float f_00;
    float f_04;
    int f_08;
    int f_0C;
} Rec;

extern Rec D_002326D8[];

void func_076748(void *, void *, void *, int, float, float);

void func_076900(int a0, int a1, void *a2, void *a3, float a4)
{
    Rec *r = D_002326D8 + a1;

    func_076748(a0, a2, a3, r->f_0C, r->f_04, a4);
}
