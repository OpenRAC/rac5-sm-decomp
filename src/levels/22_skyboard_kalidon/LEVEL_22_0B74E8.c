/* LEVEL_22:0x0B74E8 -- placement copy of FRONTEND_0190A8.c: placement copy of LEVEL_01_0C9038.c: runs the three-step reset: begin, clear the value, finish. */
struct Obj;
extern void func_10CB48(struct Obj *p);
extern void func_10A4E0(int value);
extern int func_10AAB8(void);

void func_0B74E8(struct Obj *o)
{
    func_10CB48(o);
    func_10A4E0(0);
    func_10AAB8();
}
