/* LEVEL_04:0x035438 -- asks func_136488 to work, then sets two floats of the
   object the global record points to. */
typedef struct {
    char pad[0x14];
    float f_14;
    char pad2[0x20 - 0x18];
    float f_20;
} Obj;

typedef struct {
    int f_00;
    int f_04;
    Obj *f_08;
} Holder;

extern Holder D_0024D8E0;
extern Obj D_00227558;
extern void func_136488(Holder *a, Obj *b, int c);

void func_035438(void)
{
    Obj *p;
    func_136488(&D_0024D8E0, &D_00227558, 4);
    p = D_0024D8E0.f_08;
    if (p != 0) {
        p->f_14 = 0.5f;
        p->f_20 = 0.5f;
    }
}
