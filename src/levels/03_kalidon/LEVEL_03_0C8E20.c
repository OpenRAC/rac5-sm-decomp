/* LEVEL_03:0x0C8E20 -- placement copy of FRONTEND_0190A8.c: placement copy of LEVEL_01_0C9038.c: runs the three-step reset: begin, clear the value, finish. */
struct Obj;
extern void func_133A40(struct Obj *p);
extern void func_1313D8(int value);
extern int func_1319B0(void);

void func_0C8E20(struct Obj *o)
{
    func_133A40(o);
    func_1313D8(0);
    func_1319B0();
}
