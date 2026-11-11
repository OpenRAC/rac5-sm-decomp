/* LEVEL_18:0x036608 -- placement copy of LEVEL_16_037D78.c: issues five helper calls, each with the stored counter minus one. */

struct Obj {
    unsigned char pad0[0xF4];
    int f_F4;
};

void func_025A50(int a);
void func_001508(int a);
void func_000BF0(int a);
void func_078D18(int a);
extern int func_0B8800(unsigned int value);

void func_036608(struct Obj *o)
{
    func_025A50(o->f_F4 - 1);
    func_001508(o->f_F4 - 1);
    func_000BF0(o->f_F4 - 1);
    func_078D18(o->f_F4 - 1);
    func_0B8800(o->f_F4 - 1);
}
