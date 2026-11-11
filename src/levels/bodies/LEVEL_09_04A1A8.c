/* LEVEL_09:0x04A1A8 -- placement copy of LEVEL_03_04BF28.c: runs two setup helpers on the argument, clears a halfword, then calls three helpers. */

void func_0586C8(void *p);
void func_0587A8(void *p);
void func_022D20(void *o, int v);
extern void func_038520(char *object, int mode);
void func_0233C8(void);

struct Obj {
    unsigned char pad000[0x102];
    unsigned short h102;
};

void func_04A1A8(struct Obj *a0, void *a1)
{
    func_0586C8(a1);
    func_0587A8(a1);
    a0->h102 = 0;
    func_022D20(a0, 1);
    func_038520((char *)a0, 1);
    func_0233C8();
}
