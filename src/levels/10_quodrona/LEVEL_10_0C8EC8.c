/* LEVEL_10:0x0C8EC8 -- placement copy of LEVEL_24_0C1350.c: placement copy of LEVEL_01_0C7A88.c: runs the setup helper on the object, then fires the two follow-up calls. */
struct Obj;
extern void func_1334F8(struct Obj *p);
extern int func_130310(int id);
extern void func_0D8390(int a, int b, int c, int d);
extern void func_0D83C8(int a);

void func_0C8EC8(struct Obj *p)
{
    func_1334F8(p);
    func_0D8390(0, func_130310(0xA6C), 0, 0);
    func_0D83C8(10);
}
