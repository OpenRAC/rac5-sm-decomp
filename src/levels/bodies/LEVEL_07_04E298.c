/* LEVEL_07:0x04E298 -- placement copy of LEVEL_03_04BF28.c: runs two setup helpers on the argument, clears a halfword, then calls three helpers. */

void func_05C7B8(void *p);
void func_05C898(void *p);
void func_023FF0(void *o, int v);
void func_03C610(long long first, long long second);
void func_024698(void);

struct Obj {
    unsigned char pad000[0x102];
    unsigned short h102;
};

void func_04E298(struct Obj *a0, void *a1)
{
    func_05C7B8(a1);
    func_05C898(a1);
    a0->h102 = 0;
    func_023FF0(a0, 1);
    func_03C610((long long)a0, 1);
    func_024698();
}
