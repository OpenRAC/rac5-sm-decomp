/* LEVEL_16:0x037D78 -- issues five helper calls, each with the stored counter minus one. */

struct Obj {
    unsigned char pad0[0xF4];
    int f_F4;
};

void func_0264A0(int a);
void func_001498(int a);
void func_000BF0(int a);
void func_079398(int a);
extern int func_0B9828(unsigned int value);

void func_037D78(struct Obj *o)
{
    func_0264A0(o->f_F4 - 1);
    func_001498(o->f_F4 - 1);
    func_000BF0(o->f_F4 - 1);
    func_079398(o->f_F4 - 1);
    func_0B9828(o->f_F4 - 1);
}
