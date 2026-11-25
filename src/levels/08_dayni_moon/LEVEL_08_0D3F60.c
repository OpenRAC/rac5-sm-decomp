/* LEVEL_08:0x0D3F60 -- placement copy of FRONTEND_0190A8.c: placement copy of LEVEL_01_0C9038.c: runs the three-step reset: begin, clear the value, finish. */
struct Obj;
extern void func_146BB0(struct Obj *p);
extern void func_144548(int value);
extern int func_144B20(void);

void func_0D3F60(struct Obj *o)
{
    func_146BB0(o);
    func_144548(0);
    func_144B20();
}
