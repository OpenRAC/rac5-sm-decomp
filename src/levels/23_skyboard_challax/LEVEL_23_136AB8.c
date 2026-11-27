/* LEVEL_23:0x136AB8 -- placement copy of LEVEL_03_141010.c: switches a mode byte and releases a held object when entering mode 1. */
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
extern char D_001EF468[];
extern int func_11FB40(void);
extern void func_11FBE8(unsigned int value);
extern int func_11FB90(void);
extern void func_0AFD00(void *first, void *second);
extern void func_11FC38(unsigned int value);
extern void func_073A88(struct Held *h, int a);

void func_136AB8(struct Obj *o, unsigned char from, unsigned char to)
{
    struct A *a;
    struct B *b;
    int r;
    if (from != to) {
        a = o->a;
        b = o->b;
        if (to == 1) {
            r = func_11FB40();
            func_11FBE8(0);
            do {
                if (func_11FB90()) {
                    func_0AFD00(D_001EF468, (void *)0x2B8);
                    func_11FC38(0);
                }
            } while (0);
            if (r != 0) {
                if (a->held != 0) {
                    if (a->held->flags & 1) {
                        func_073A88(a->held, 1);
                        a->held = 0;
                    }
                }
                b->flag = 1;
            }
        }
        o->mode = to;
    }
}
