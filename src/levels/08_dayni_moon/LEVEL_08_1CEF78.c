/* LEVEL_08:0x1CEF78 -- placement copy of LEVEL_01_19C8F8.c: puts the object into state 6: clears a field of the first linked record, resets the second record and runs its sub-record helper. */
struct A {
    char pad00[0x14];
    int f14;
};

struct B {
    int f0;
    char pad04[0x60];
    unsigned char b64;
};

struct Obj {
    char pad00[0x45];
    unsigned char b45;
    char pad46[0xE];
    struct A *f54;
    struct B *f58;
};

extern void func_21D428(void *value);

int func_1CEF78(struct Obj *o)
{
    struct A *a = o->f54;
    struct B *b = o->f58;

    a->f14 = 0;
    o->b45 = 6;
    b->f0 = 0;
    b->b64 = 0;
    func_21D428((char *)b + 0x28);
    return 1;
}
