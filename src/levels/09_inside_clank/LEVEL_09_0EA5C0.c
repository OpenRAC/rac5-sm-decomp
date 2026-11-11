typedef struct {
    char pad[0x14];
    char *f14;
    float f18;
    int f1C;
} Obj;

extern void func_093D28(Obj *self, int x, int flag);

void func_0EA5C0(Obj *self, int x, float *p)
{
    func_093D28(self, x, 1);
    self->f14 = p;
    self->f18 = 1.0f / *p;
    self->f1C = 0;
}
