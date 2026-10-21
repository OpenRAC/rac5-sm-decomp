/* LEVEL_03:0x074130 -- table-driven forwarder: the indexed record gives
   the fourth integer argument and the first float argument of the callee,
   the two pointers and the float of the caller follow. */
typedef struct {
    float f_00;
    float f_04;
    int f_08;
    int f_0C;
} Rec;

extern Rec D_00231C58[];

void func_073F78(void *, void *, void *, int, float, float);

void func_074130(int a0, int a1, void *a2, void *a3, float a4)
{
    Rec *r = D_00231C58 + a1;

    func_073F78(a0, a2, a3, r->f_0C, r->f_04, a4);
}
