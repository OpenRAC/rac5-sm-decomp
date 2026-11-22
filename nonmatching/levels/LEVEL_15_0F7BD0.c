/* USA LEVEL_15.REL:0x0F7BD0, 380-byte candidate (21 November 2026).
 * Measured pinned: 4 differing words; first difference at 0xD4.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
struct Pair {
    char *a;
    char *b;
};
struct Hnd {
    char *p;
    char pad_04[0x14];
    int f_18;
};
struct Obj {
    char pad_00[0x54];
    void **list;
};
extern struct Hnd D_002A8B58;
extern unsigned char D_0014ADEC;
extern unsigned char D_00144071;
extern unsigned char D_00144072;
extern unsigned char D_00144073;

extern void func_1321E8(int a);
extern void func_07FFE0(int a, int b);
extern void func_07C418(int a, int b, int c);
extern void func_07A5D8(int a);
extern void func_070828(int a);
extern int func_0F5068(void);
extern int func_0F62C8(void **arr);
extern void func_02B288(int a);
extern void func_11F4C8(struct Pair *p);
extern void func_0FB750(char **p);
extern void func_0F78F8(void);
extern void func_0F4F78(void);
extern void func_0F5650(void);
extern void func_130FF0(void);
extern void func_12B0B0(void);
extern void func_0FA1B0(void);
extern void func_1288B8(void);
extern void func_0F67E0(void);
extern void func_0F8620(void);
extern void func_0FE260(void);
extern void func_0F6380(void);
extern void func_12F460(void);
extern void func_0F78B8(void);
extern void func_0F64E8(void);
extern void func_137320(void);
extern void func_12F548(void);
extern void func_132450(void);
extern void func_0F7A90(void);

int func_0F7BD0(struct Obj *o)
{
    void **list;
    struct Pair pc;
    struct Pair pr;
    char *w;

    list = o->list;
    D_00144071 = 0;
    D_00144072 = 0;
    D_00144073 = 0;
    if (D_0014ADEC != 0) {
        func_0F78F8();
        func_1321E8(0x2000);
        func_07FFE0(0x40, 0x4000);
        func_07C418(0x200, 0x480000, 0x80000);
        func_07A5D8(0x180000);
        func_070828(0x20000);
        func_0F4F78();
        if (func_0F5068() == 0) {
            return 0;
        }
        func_0F5650();
        if (func_0F62C8(list) == 0) {
            return 0;
        }
        func_130FF0();
        func_12B0B0();
        func_0FA1B0();
        func_1288B8();
        func_0F67E0();
        func_02B288(0x400);
        pr.a = D_002A8B58.p;
        pr.b = D_002A8B58.p + 0x34;
        pc = pr;
        func_11F4C8(&pc);
        w = D_002A8B58.p + 0x68;
        func_0FB750(&w);
        func_0F8620();
        func_0FE260();
        func_0F6380();
        func_12F460();
        func_0F78B8();
        func_0F64E8();
        func_137320();
        D_002A8B58.f_18 = -1;
        func_12F548();
        func_132450();
    }
    func_0F7A90();
    return 1;
}
