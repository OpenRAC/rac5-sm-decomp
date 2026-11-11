/* LEVEL_01:0x15D610 -- picks a random unflagged entry that passes a test and flags it. */
struct Item {
    char pad[0x30];
    int f30;
};
struct Tab {
    struct Item *ptr[80];
    unsigned char flag[8];
    unsigned int cnt;
};
struct Own {
    char pad[0x54];
    struct Tab *tab;
};
extern int func_084708(int a, void *b);
extern int rand(void);

int func_15D610(struct Own *o, int arg)
{
    struct Tab *t = o->tab;
    char buf[16];
    unsigned int i;
    int n = 0;
    int r;
    int idx;

    for (i = 0; i < t->cnt; i++) {
        if ((t->flag[i] ^ 1) & 1) {
            if (func_084708(arg, &t->ptr[i]->f30)) {
                buf[n] = i;
                n++;
            }
        }
    }
    if (n == 0)
        return -1;
    r = rand() % n;
    idx = buf[r];
    t->flag[idx] |= 1;
    return idx;
}
