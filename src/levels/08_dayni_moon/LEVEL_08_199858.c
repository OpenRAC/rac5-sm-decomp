/* LEVEL_08:0x199858 -- placement copy of LEVEL_07_173500.c: forwards its three arguments to the helper together with the third's link word and a zero. */
typedef struct {
    char pad_00[0x54];
    int link;
} Obj;

extern void func_031770(int a, int b, Obj *c, int d, int e);

void func_199858(int a, int b, Obj *c)
{
    func_031770(a, b, c, c->link, 0);
}
