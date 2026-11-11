/* LEVEL_19:0x037058 -- placement copy of LEVEL_16_037D78.c: issues five helper calls, each with the stored counter minus one. */

struct Obj {
    unsigned char pad0[0xF4];
    int f_F4;
};

void func_026048(int a);
void func_001498(int a);
void func_000BF0(int a);
void func_079880(int a);
extern int func_0B9100(unsigned int value);

void func_037058(struct Obj *o)
{
    func_026048(o->f_F4 - 1);
    func_001498(o->f_F4 - 1);
    func_000BF0(o->f_F4 - 1);
    func_079880(o->f_F4 - 1);
    func_0B9100(o->f_F4 - 1);
}
