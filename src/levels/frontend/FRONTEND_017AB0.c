/* FRONTEND:0x017AB0 -- placement copy of LEVEL_24_0C1350.c: placement copy of LEVEL_01_0C7A88.c: runs the setup helper on the object, then fires the two follow-up calls. */
struct Obj;
extern void func_022938(struct Obj *p);
extern int func_01F778(int id);
extern void func_0140E0(int a, int b, int c, int d);
extern void func_014118(int a);

void func_017AB0(struct Obj *p)
{
    func_022938(p);
    func_0140E0(0, func_01F778(0xA6C), 0, 0);
    func_014118(10);
}
