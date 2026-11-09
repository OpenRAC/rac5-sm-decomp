/* LEVEL_10:0x04C370 -- placement copy of LEVEL_03_04BF28.c: runs two setup helpers on the argument, clears a halfword, then calls three helpers. */

void func_05A890(void *p);
void func_05A970(void *p);
void func_023390(void *o, int v);
void func_03A748(long long first, long long second);
void func_023A38(void);

struct Obj {
    unsigned char pad000[0x102];
    unsigned short h102;
};

void func_04C370(struct Obj *a0, void *a1)
{
    func_05A890(a1);
    func_05A970(a1);
    a0->h102 = 0;
    func_023390(a0, 1);
    func_03A748((long long)a0, 1);
    func_023A38();
}
