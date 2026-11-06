/* LEVEL_03.REL:0x0B9E58, bounded 176-byte candidate.
 * Isolated pinned C object: 164 bytes; first linked
 * difference at body byte +1. Not linked into the accepted
 * gate or counted.
 * Reopen: Recheck the measured register or order difference.
 */
struct entry {
    int f0;
    unsigned int f4;
    unsigned int f8;
    char fc;
    int f10;
    unsigned int f14;
    int f18;
    int f1c;
    int f20;
    int f24;
    int f28;
    int f2c;
};

struct state {
    int pad[10];
    char *end;
    char *cur;
    int state;
    int count;
    unsigned int index;
};

int func_0B9E58(struct state *p)
{
    unsigned int i;

    if (p->state != 1)
        return 0;
    i = p->index;
    if (i < 4) {
        do {
            struct entry *e = (struct entry *)(p->cur + i * 0x30);
            e->f8 = 0xFFFFFFFFu;
            e->f14 = 0xFFFFFFFFu;
            e->f10 = 0;
            e->f0 = 0;
            e->fc = 0;
            e->f4 = 0xFFFFFFFFu;
            i++;
        } while (i < 4);
    }
    p->count++;
    p->cur += 0xE4;
    if (p->cur > p->end) {
        p->cur = p->end;
        return 0;
    }
    p->state = 0;
    return 1;
}
