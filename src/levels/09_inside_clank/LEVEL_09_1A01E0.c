/* LEVEL_09:0x1A01E0 -- placement copy of LEVEL_07_173500.c: forwards its three arguments to the helper together with the third's link word and a zero. */
typedef struct {
    char pad_00[0x54];
    int link;
} Obj;

extern void func_02F9B0(int a, int b, Obj *c, int d, int e);

void func_1A01E0(int a, int b, Obj *c)
{
    func_02F9B0(a, b, c, c->link, 0);
}
