/* LEVEL_10:0x0CA478 -- placement copy of FRONTEND_0190A8.c: placement copy of LEVEL_01_0C9038.c: runs the three-step reset: begin, clear the value, finish. */
struct Obj;
extern void func_1334F8(struct Obj *p);
extern void func_130E70(int value);
extern int func_131468(void);

void func_0CA478(struct Obj *o)
{
    func_1334F8(o);
    func_130E70(0);
    func_131468();
}
