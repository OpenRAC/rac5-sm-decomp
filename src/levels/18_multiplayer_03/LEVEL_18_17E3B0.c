/* LEVEL_18:0x17E3B0 -- placement copy of LEVEL_16_17B908.c: gathers nearby objects and drops those of two kinds from the list. */
struct Kind {
    char pad[0x24];
    unsigned id;
};
struct Link {
    int *first;
};
struct Item {
    char pad[0x40];
    struct Kind *kind;
    char pad44[0x14];
    int **link;
};
struct Owner {
    char pad[0x30];
    char pos[1];
};
extern int func_01A0A0(struct Item **buf, int max, char *pos, int a, int b, int c, int d);
extern int func_036BF8(int *p, struct Owner *o);

int func_17E3B0(struct Owner *owner)
{
    struct Item *buf[32];
    unsigned n;
    unsigned i;
    n = func_01A0A0(buf, 0x20, owner->pos, 0x129, 0x101, 6, 1);
    for (i = 0; i < n; i++) {
        if (buf[i]->kind->id == 0xC7358C6B) {
            if (func_036BF8(*buf[i]->link, owner) == 0)
                goto remove;
        }
        if (buf[i]->kind->id == 0x9A64B044) {
remove:
            buf[i] = buf[--n];
            i--;
        }
    }
    return n;
}
