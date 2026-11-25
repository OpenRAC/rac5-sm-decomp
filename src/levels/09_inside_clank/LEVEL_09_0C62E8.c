/* LEVEL_09:0x0C62E8 -- placement copy of FRONTEND_0190A8.c: placement copy of LEVEL_01_0C9038.c: runs the three-step reset: begin, clear the value, finish. */
struct Obj;
extern void func_12E610(struct Obj *p);
extern void func_12BFA8(int value);
extern int func_12C580(void);

void func_0C62E8(struct Obj *o)
{
    func_12E610(o);
    func_12BFA8(0);
    func_12C580();
}
