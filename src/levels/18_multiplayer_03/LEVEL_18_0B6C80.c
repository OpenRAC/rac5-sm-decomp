/* LEVEL_18:0x0B6C80 -- placement copy of FRONTEND_0190A8.c: placement copy of LEVEL_01_0C9038.c: runs the three-step reset: begin, clear the value, finish. */
struct Obj;
extern void func_1109F8(struct Obj *p);
extern void func_10EA48(int value);
extern int func_10F000(void);

void func_0B6C80(struct Obj *o)
{
    func_1109F8(o);
    func_10EA48(0);
    func_10F000();
}
