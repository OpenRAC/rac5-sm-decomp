/* LEVEL_20:0x032060 -- placement copy of LEVEL_16_037D78.c: issues five helper calls, each with the stored counter minus one. */

struct Obj {
    unsigned char pad0[0xF4];
    int f_F4;
};

void func_022FA8(int a);
void func_001458(int a);
void func_000BD8(int a);
void func_067008(int a);
extern int func_0A3D58(unsigned int value);

void func_032060(struct Obj *o)
{
    func_022FA8(o->f_F4 - 1);
    func_001458(o->f_F4 - 1);
    func_000BD8(o->f_F4 - 1);
    func_067008(o->f_F4 - 1);
    func_0A3D58(o->f_F4 - 1);
}
