/* LEVEL_16:0x139A58 -- placement copy of LEVEL_07_173500.c: forwards its three arguments to the helper together with the third's link word and a zero. */
typedef struct {
    char pad_00[0x54];
    int link;
} Obj;

extern void func_02F170(int a, int b, Obj *c, int d, int e);

void func_139A58(int a, int b, Obj *c)
{
    func_02F170(a, b, c, c->link, 0);
}
