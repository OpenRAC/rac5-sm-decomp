/* LEVEL_05:0x0C75E0 -- placement copy of FRONTEND_0190A8.c: placement copy of LEVEL_01_0C9038.c: runs the three-step reset: begin, clear the value, finish. */
struct Obj;
extern void func_130FF0(struct Obj *p);
extern void func_12E988(int value);
extern int func_12EF60(void);

void func_0C75E0(struct Obj *o)
{
    func_130FF0(o);
    func_12E988(0);
    func_12EF60();
}
