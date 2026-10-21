typedef struct {
    short f0;
    char pad[0x80 - 2];
    float f80;
} Obj;

extern char D_0037EB5C[];
extern char D_0037E8B8[];

extern void func_02C9B8(char *p0, char *p1, char *p2, int i1, int i2);

void func_148318(Obj *self, int x, int y)
{
    self->f0 = 0;
    func_02C9B8((char *)self + 0x48, D_0037EB5C, D_0037E8B8, x, y);
    self->f80 = 60.0f;
}
