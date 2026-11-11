/* LEVEL_17:0x037618 -- placement copy of LEVEL_16_037D78.c: issues five helper calls, each with the stored counter minus one. */

struct Obj {
    unsigned char pad0[0xF4];
    int f_F4;
};

void func_025E20(int a);
void func_001498(int a);
void func_000BF0(int a);
void func_079E10(int a);
extern int func_0B8D68(unsigned int value);

void func_037618(struct Obj *o)
{
    func_025E20(o->f_F4 - 1);
    func_001498(o->f_F4 - 1);
    func_000BF0(o->f_F4 - 1);
    func_079E10(o->f_F4 - 1);
    func_0B8D68(o->f_F4 - 1);
}
