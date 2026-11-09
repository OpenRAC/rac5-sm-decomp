/* LEVEL_06:0x04A3C0 -- placement copy of LEVEL_03_04BF28.c: runs two setup helpers on the argument, clears a halfword, then calls three helpers. */

void func_058888(void *p);
void func_058968(void *p);
void func_022130(void *o, int v);
void func_038768(long long first, long long second);
void func_0227D8(void);

struct Obj {
    unsigned char pad000[0x102];
    unsigned short h102;
};

void func_04A3C0(struct Obj *a0, void *a1)
{
    func_058888(a1);
    func_058968(a1);
    a0->h102 = 0;
    func_022130(a0, 1);
    func_038768((long long)a0, 1);
    func_0227D8();
}
