/* LEVEL_03:0x04BF28 -- runs two setup helpers on the argument, clears a halfword, then calls three helpers. */

void func_05A448(void *p);
void func_05A528(void *p);
void func_0238F8(void *o, int v);
void func_03A300(long long first, long long second);
void func_023FA0(void);

struct Obj {
    unsigned char pad000[0x102];
    unsigned short h102;
};

void func_04BF28(struct Obj *a0, void *a1)
{
    func_05A448(a1);
    func_05A528(a1);
    a0->h102 = 0;
    func_0238F8(a0, 1);
    func_03A300((long long)a0, 1);
    func_023FA0();
}
