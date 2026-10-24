/* LEVEL_02:0x072D50 -- rotates the four arguments and passes the scale. */
typedef struct {
    char pad[0x1F8];
    float f_1F8;
} Obj;

extern void func_072D80(void *b, void *c, void *d, int zero, float v);

void func_072D50(Obj *self, void *b, void *c, void *d)
{
    func_072D80(b, c, d, 0, self->f_1F8);
}
