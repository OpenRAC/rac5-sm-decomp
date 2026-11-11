/* LEVEL_07.REL:0x1344B8 -- while the global camera record is set, hands its
   four orientation floats and the fixed flag vector to the view builder. */
typedef struct {
    char pad[0x14];
    float f_14;
    float f_18;
    float f_1C;
    float f_20;
} Rec;

extern Rec *D_0021B230;

extern void func_082B38(void *a0, Rec *p, int a2, int a3, int t0, int t1,
                        int t2, int t3, float f12, float f13, float f14,
                        float f15);

void func_1344B8(void *a0)
{
    Rec *p = D_0021B230;

    if (p)
        func_082B38(a0, p, 0, 0, 0, 0, 0, 1, p->f_14, p->f_18, p->f_1C,
                    p->f_20);
}
