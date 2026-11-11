/* LEVEL_18:0x04FC40 -- placement copy of LEVEL_01_058778.c: gathers found objects into three bounded lists chosen by a type key. */

struct Info058778 {
    char pad0[0x24];
    unsigned int key;
};

struct Item058778 {
    char pad0[0x40];
    struct Info058778 *info;
};

struct Lists058778 {
    struct Item058778 *l0[8];
    unsigned int n0;
    struct Item058778 *l1[16];
    unsigned int n1;
    struct Item058778 *l2[32];
    unsigned int n2;
};

extern int func_01A0A0(struct Item058778 **buf, int a1, int a2, int a3, int a4, int a5, int a6);

void func_04FC40(struct Lists058778 *s, int x)
{
    struct Item058778 *buf[64];
    struct Item058778 **pp;
    struct Item058778 **end;
    int n;

    s->n0 = 0;
    s->n1 = 0;
    s->n2 = 0;
    n = func_01A0A0(buf, 0x40, x, 0x1C7F, 0x1411, 0x10, 0);
    end = buf + n;
    for (pp = buf; pp != end; pp++) {
        struct Item058778 *p;

        p = *pp;
        switch (p->info->key) {
        case 0x5E139936:
            if (s->n0 < 8) {
                s->l0[s->n0] = p;
                s->n0 = s->n0 + 1;
            }
            break;
        case 0x2A3547B7:
            if (s->n1 < 16) {
                s->l1[s->n1] = p;
                s->n1 = s->n1 + 1;
            }
            break;
        case 0x663778B5:
            if (s->n2 < 32) {
                s->l2[s->n2] = p;
                s->n2 = s->n2 + 1;
            }
            break;
        }
    }
}
