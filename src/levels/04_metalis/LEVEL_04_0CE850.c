/* LEVEL_04:0x0CE850 -- placement copy of FRONTEND_0190A8.c: placement copy of LEVEL_01_0C9038.c: runs the three-step reset: begin, clear the value, finish. */
struct Obj;
extern void func_141AF8(struct Obj *p);
extern void func_13F490(int value);
extern int func_13FA68(void);

void func_0CE850(struct Obj *o)
{
    func_141AF8(o);
    func_13F490(0);
    func_13FA68();
}
