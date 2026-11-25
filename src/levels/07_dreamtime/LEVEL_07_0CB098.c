/* LEVEL_07:0x0CB098 -- placement copy of FRONTEND_0190A8.c: placement copy of LEVEL_01_0C9038.c: runs the three-step reset: begin, clear the value, finish. */
struct Obj;
extern void func_138678(struct Obj *p);
extern void func_136010(int value);
extern int func_1365E8(void);

void func_0CB098(struct Obj *o)
{
    func_138678(o);
    func_136010(0);
    func_1365E8();
}
