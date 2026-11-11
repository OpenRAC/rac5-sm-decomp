/* LEVEL_07:0x173500 -- forwards its three arguments to the helper together with the third's link word and a zero. */
typedef struct {
    char pad_00[0x54];
    int link;
} Obj;

extern void func_030AD8(int a, int b, Obj *c, int d, int e);

void func_173500(int a, int b, Obj *c)
{
    func_030AD8(a, b, c, c->link, 0);
}
