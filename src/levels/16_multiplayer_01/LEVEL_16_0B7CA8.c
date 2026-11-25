/* LEVEL_16:0x0B7CA8 -- placement copy of FRONTEND_0190A8.c: placement copy of LEVEL_01_0C9038.c: runs the three-step reset: begin, clear the value, finish. */
struct Obj;
extern void func_111D48(struct Obj *p);
extern void func_10FD98(int value);
extern int func_110350(void);

void func_0B7CA8(struct Obj *o)
{
    func_111D48(o);
    func_10FD98(0);
    func_110350();
}
