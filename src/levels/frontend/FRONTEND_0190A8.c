/* FRONTEND:0x0190A8 -- placement copy of LEVEL_01_0C9038.c: runs the three-step reset: begin, clear the value, finish. */
struct Obj;
extern void func_022938(struct Obj *p);
extern void func_0209E0(int value);
extern int func_020F78(void);

void func_0190A8(struct Obj *o)
{
    func_022938(o);
    func_0209E0(0);
    func_020F78();
}
