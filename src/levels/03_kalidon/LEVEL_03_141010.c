/* LEVEL_03:0x141010 -- switches a mode byte and releases a held object when entering mode 1. */
struct Held {
    char pad[0x64];
    unsigned int flags;
};
struct A {
    char pad[0xC];
    struct Held *held;
};
struct B {
    char pad[0x15];
    unsigned char flag;
};
struct Obj {
    char pad[0x45];
    unsigned char mode;
    char pad46[0x0E];
    struct A *a;
    struct B *b;
};
extern char D_00234F78[];
extern int func_12CF30(void);
extern void func_12CFB8(unsigned int value);
extern int func_12CF60(void);
extern void func_0B8D50(void *first, void *second);
extern void func_12D008(unsigned int value);
extern void func_07C468(struct Held *h, int a);

void func_141010(struct Obj *o, unsigned char from, unsigned char to)
{
    struct A *a;
    struct B *b;
    int r;
    if (from != to) {
        a = o->a;
        b = o->b;
        if (to == 1) {
            r = func_12CF30();
            func_12CFB8(0);
            do {
                if (func_12CF60()) {
                    func_0B8D50(D_00234F78, (void *)0x2B8);
                    func_12D008(0);
                }
            } while (0);
            if (r != 0) {
                if (a->held != 0) {
                    if (a->held->flags & 1) {
                        func_07C468(a->held, 1);
                        a->held = 0;
                    }
                }
                b->flag = 1;
            }
        }
        o->mode = to;
    }
}
