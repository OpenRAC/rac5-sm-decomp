/* LEVEL_15:0x0A9680 -- placement copy of FRONTEND_0190A8.c: placement copy of LEVEL_01_0C9038.c: runs the three-step reset: begin, clear the value, finish. */
struct Obj;
extern void func_0F4540(struct Obj *p);
extern void func_0F1ED8(int value);
extern int func_0F24B0(void);

void func_0A9680(struct Obj *o)
{
    func_0F4540(o);
    func_0F1ED8(0);
    func_0F24B0();
}
