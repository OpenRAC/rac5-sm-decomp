typedef struct {
    char pad[0x14];
    float f14;
    float f18;
    float f1c;
    float f20;
} Obj;

extern Obj *D_001F5FB0;

extern void func_07E070(Obj *p0, Obj *p1,
                        float f1, int i1, float f2, int i2,
                        float f3, int i3, float f4, int i4,
                        int i5, int i6);

void func_12CE30(Obj *self)
{
    Obj *g = D_001F5FB0;

    if (g == 0) {
        return;
    }
    func_07E070(self, g, g->f14, 0, g->f18, 0,
                g->f1c, 0, g->f20, 0, 0, 1);
}
