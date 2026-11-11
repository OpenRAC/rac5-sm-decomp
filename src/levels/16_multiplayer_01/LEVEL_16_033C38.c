/* LEVEL_16:0x033C38 -- unlinks an object from its list, releases every resource it holds and returns its slot to the free table. */

struct Node033C38 {
    struct Node033C38 *next;
    char pad_04[0x10];
    struct Node033C38 *prev;
};

struct Obj033C38 {
    char pad_00[0xF4];
    int w_F4;
    int w_F8;
    char pad_FC[0x4A0];
    void *p_59C;
    void *p_5A0;
    void *p_5A4;
    void *p_5A8;
    void *p_5AC;
    int w_5B0;
    void *p_5B4;
    void *p_5B8[6];
    char pad_5D0[0xA00];
    struct Node033C38 n_FD0;
};

extern char D_001A2118[];

void func_06F940(void *p, int flag);

void func_033C38(struct Obj033C38 *o)
{
    struct Node033C38 *n;
    unsigned int i;

    if (o->w_F4 != 0) {
        n = &o->n_FD0;
        o->w_5B0 = 0;
        if (n->prev != 0) {
            n->prev->next = n->next;
            if (n->next != 0) {
                n->next->prev = n->prev;
            }
            n->prev = 0;
        }
        if (o->p_5B4 != 0) {
            func_06F940(o->p_5B4, 1);
            o->p_5B4 = 0;
        }
        if (o->p_5A4 != 0) {
            func_06F940(o->p_5A4, 1);
            o->p_5A4 = 0;
        }
        if (o->p_5A8 != 0) {
            func_06F940(o->p_5A8, 1);
            o->p_5A8 = 0;
        }
        if (o->p_5A0 != 0) {
            func_06F940(o->p_5A0, 1);
            o->p_5A0 = 0;
        }
        if (o->p_5AC != 0) {
            func_06F940(o->p_5AC, 1);
            o->p_5AC = 0;
        }
        for (i = 0; i < 6; i++) {
            if (o->p_5B8[i] != 0) {
                func_06F940(o->p_5B8[i], 1);
                o->p_5B8[i] = 0;
            }
        }
        if (o->p_59C != 0) {
            func_06F940(o->p_59C, 1);
            o->p_59C = 0;
        }
        o->w_F4 = 0;
        D_001A2118[o->w_F8] = 1;
    }
}
