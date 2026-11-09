/* LEVEL_24:0x046C50 -- placement copy of LEVEL_03_04BF28.c: runs two setup helpers on the argument, clears a halfword, then calls three helpers. */

void func_055118(void *p);
void func_0551F8(void *p);
void func_021908(void *o, int v);
void func_0350E8(long long first, long long second);
void func_021EA8(void);

struct Obj {
    unsigned char pad000[0x102];
    unsigned short h102;
};

void func_046C50(struct Obj *a0, void *a1)
{
    func_055118(a1);
    func_0551F8(a1);
    a0->h102 = 0;
    func_021908(a0, 1);
    func_0350E8((long long)a0, 1);
    func_021EA8();
}
