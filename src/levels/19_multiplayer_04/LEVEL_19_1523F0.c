/* LEVEL_19.REL:0x1523F0 -- hands the shared camera record to the view builder. */
typedef struct { char pad[0x14]; float f_14, f_18, f_1C, f_20; } Rec;
extern Rec *D_001BEE28;
extern void func_073660(void *a0, Rec *p, int a2, int a3, int t0, int t1,
                        int t2, int t3, float f12, float f13, float f14, float f15);
void func_1523F0(void *a0)
{
    Rec *p = D_001BEE28;
    if (p)
        func_073660(a0, p, 0, 0, 0, 0, 0, 1, p->f_14, p->f_18, p->f_1C, p->f_20);
}
