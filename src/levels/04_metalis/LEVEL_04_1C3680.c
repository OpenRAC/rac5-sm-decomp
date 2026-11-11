/* LEVEL_04:0x1C3680 -- two calls around the four-float forward. */
typedef struct {
    char pad_00[0x14];
    float f_14;
    float f_18;
    float f_1C;
    float f_20;
} Obj;

typedef struct {
    char pad_00[0x30];
    char pad_30[1];
} Level;

extern Obj *D_3B3938;
extern void func_0F6E68(int a, char *b);
extern void func_083E30(Level *l, Obj *o, int i0, int i1, int i2, int i3,
                        int i4, int i5, float f0, float f1, float f2, float f3);
extern void func_1C3640(Level *l);

void func_1C3680(Level *a0)
{
    Obj *p;

    func_0F6E68(0x17, (char *)a0 + 0x30);
    p = D_3B3938;
    if (p != 0) {
        func_083E30(a0, p, 0, 0, 0, 0, 0, 1,
                    p->f_14, p->f_18, p->f_1C, p->f_20);
    }
    func_1C3640(a0);
}
