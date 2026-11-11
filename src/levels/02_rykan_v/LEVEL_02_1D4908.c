/* LEVEL_02:0x1D4908 -- refreshes a state object's parts after a check and returns a result code. */
typedef struct {
    char pad0[0x30];
    int w30;
    int w34;
    char pad38[0xE];
    short h46;
    unsigned char b48;
    unsigned char b49;
} St;
typedef struct {
    char pad0[0x54];
    St *p54;
} Obj;
extern int func_1D4B30(Obj *o);
extern int func_1D4ED0(Obj *o);
extern void func_167A78(int a, int b);
extern void func_1679C8(int a, int b, int c);
extern void func_1D9698(int a, int b);
extern int func_031B88(St *s, Obj *o, int a, int b, float x, float y, int z);

int func_1D4908(Obj *o)
{
    St *s = o->p54;
    int old = s->b48;
    int r;
    if (!func_1D4B30(o) && !func_1D4ED0(o))
        return 2;
    if (old != s->b48) {
        func_167A78(s->w34, s->b49);
        func_1679C8(s->w34, s->b49, s->b48);
    }
    func_1D9698(s->w30, s->b48);
    r = func_031B88(s, o, s->w34, s->b49, 0.8999999761581421f, 0.800000011920929f, 1);
    if (r == 2)
        return s->h46 <= 0 ? 8 : 10;
    return r != 0 ? 10 : 6;
}
