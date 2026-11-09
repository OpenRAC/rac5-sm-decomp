/* LEVEL_08:0x052DD0 -- placement copy of LEVEL_03_04BF28.c: runs two setup helpers on the argument, clears a halfword, then calls three helpers. */

void func_0612F0(void *p);
void func_0613D0(void *p);
void func_0242A8(void *o, int v);
void func_041148(long long first, long long second);
void func_024950(void);

struct Obj {
    unsigned char pad000[0x102];
    unsigned short h102;
};

void func_052DD0(struct Obj *a0, void *a1)
{
    func_0612F0(a1);
    func_0613D0(a1);
    a0->h102 = 0;
    func_0242A8(a0, 1);
    func_041148((long long)a0, 1);
    func_024950();
}
