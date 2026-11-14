/* LEVEL_02:0x1BF908 -- counts a timer down, then switches state according to the first check, the expired timer or a table test. */
struct SubA {
    char p0[0x34];
    void *p34;
};

struct SubB {
    char p0[0x88];
    int timer;
    char p8C[4];
    unsigned char b90;
};

struct Self {
    char p0[0x45];
    unsigned char b45;
    char p46[0x54 - 0x46];
    struct SubA *p54;
    struct SubB *p58;
};

extern char D_0023E618[];
extern int func_1C0DD0(struct Self *s);
extern int func_180D98(void *a, int b, char *tbl);
extern void func_1BEE60(struct Self *s, int b, int mode);

void func_1BF908(struct Self *s)
{
    struct SubA *a;
    struct SubB *b;

    a = s->p54;
    b = s->p58;
    b->timer = b->timer - 1;
    if (func_1C0DD0(s) != 0) {
        func_1BEE60(s, s->b45, 0xB);
    } else if (b->timer == 0) {
        func_1BEE60(s, s->b45, 5);
    } else if (func_180D98(a->p34, b->b90, D_0023E618) != 0) {
        func_1BEE60(s, s->b45, 5);
    }
}
