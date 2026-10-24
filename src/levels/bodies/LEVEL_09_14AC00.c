typedef struct {
    short  f0;
    char   pad[0x7E];
    float  f80;
} Obj;

extern char D_0037955C[];
extern char D_003792B8[];

extern void func_02D438(void *, void *, void *, void *, void *);

void func_14AC00(Obj *o, void *a, void *b)
{
    o->f0 = 0;
    func_02D438((char *)o + 0x48, D_0037955C, D_003792B8, a, b);
    o->f80 = 60.0f;
}
