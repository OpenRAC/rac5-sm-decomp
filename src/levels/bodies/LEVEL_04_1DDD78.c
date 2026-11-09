/* LEVEL_04:0x1DDD78 -- stores a constant byte, calls a helper, then calls a helper on two table entries. */

struct Ent1DDD78 {
    char pad0[0x45];
    unsigned char b45;
};

struct Tab1DDD78 {
    char pad0[4];
    struct Ent1DDD78 *e[2];
    char pad0C[0x10C - 0x0C];
    unsigned char b10C;
};

extern unsigned char func_080188(char *a0, int b, int c, int d, float f, float g);
extern void func_163018(void *p, int b, int c);

void func_1DDD78(char *a0)
{
    struct Tab1DDD78 *p;
    struct Ent1DDD78 *e;
    unsigned int i;

    p = *(struct Tab1DDD78 **)(a0 + 0x58);
    p->b10C = 1;
    func_080188(a0, 1, 0, 1, 0.15000000596046448f, 0.0f);
    for (i = 0; i < 2; i++) {
        e = p->e[i];
        if (e != 0) {
            func_163018(e, e->b45, 6);
        }
    }
}
