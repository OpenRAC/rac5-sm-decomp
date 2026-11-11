/* LEVEL_10:0x173BF0 -- issues six configuration calls, one of them using a field of the owner. */

void func_0B8670(int a, int b);
void func_0B8518(int v);
void func_0B8550(int v);
void func_0B84B0(int v);
void func_0B85D8(int v);
void func_0B8430(int v);

struct Obj {
    unsigned char pad00[0xF0];
    int wF0;
};

void func_173BF0(struct Obj *o)
{
    func_0B8670(2, 3);
    func_0B8518(o->wF0);
    func_0B8550(100);
    func_0B84B0(71);
    func_0B85D8(90);
    func_0B8430(90);
}
