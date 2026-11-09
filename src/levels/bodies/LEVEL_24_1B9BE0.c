/* LEVEL_24:0x1B9BE0 -- placement copy of LEVEL_01_1E8F08.c: walks two 24-byte slots, calling a helper with each slot and a table word. */
struct A1E8F08 {
    char pad0[0x18];
};

struct E1E8F08 {
    int f00;
    char pad04[0x78];
};

struct B1E8F08 {
    char pad0[0x120];
    struct E1E8F08 e[1];
};

extern void func_1B92E0(struct A1E8F08 *p, long long v, int c);

void func_1B9BE0(struct A1E8F08 *p, struct B1E8F08 *b, int c)
{
    int cur;
    int end;
    struct E1E8F08 *q;

    cur = (int)p;
    end = cur + 0x30;
    q = b->e;
    do {
        func_1B92E0((struct A1E8F08 *)cur, q->f00, c);
        cur += 0x18;
        q++;
    } while (cur < end);
}
