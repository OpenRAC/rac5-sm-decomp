/* USA LEVEL_01.REL:0x1842C8, 224-byte candidate (21 November 2026).
 * Measured pinned: 10 differing words; first difference at 0x78.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
struct Hook {
    char pad_00[0xE0];
    void (*cb_E0)(void);
};
struct Mid {
    char pad_00[0x48];
    struct Hook *hook_48;
};
struct Top {
    char pad_00[0x59C];
    struct Mid *mid_59C;
};
struct Owner {
    char pad_00[0xF8];
    int id_F8;
    char pad_FC[0xEF0];
    int f_FEC;
};
struct Node {
    struct Top *owner;
    char pad_04[0x18];
    char b_1C;
    char pad_1D[0x17];
    int w_34;
    char pad_38[8];
    int w_40;
};
struct Link {
    char pad_00[0xDC];
    int w_DC;
};
struct Obj {
    char pad_00[0x48];
    struct Link *link_48;
    char pad_4C[0xC];
    struct Node *node_58;
};
extern int func_024628(int x, int y);
extern void func_06AE40(char *object, int value);
extern void func_183EC8(char *state, char *entry);
extern void func_182F38(struct Obj *o);
extern void func_1E8F70(char *record);
extern void func_17E5F0(char *record);
extern void func_17D5B0(char *item);
extern char D_00395FE0[];
extern void func_03C810(void);

void func_1842C8(struct Obj *o)
{
    struct Node *n = o->node_58;
    struct Owner *w = (struct Owner *)n->owner;
    int k;
    int j;
    char *entry;
    struct Node *m;

    k = *(int *)(func_024628(11, w->id_F8) + 0x3C);
    j = 3;
    if (k < 3)
        j = k;
    entry = D_00395FE0 + j * 0x250;
    func_06AE40((char *)n->owner, 0);
    func_183EC8((char *)o, entry);
    func_182F38(o);
    m = o->node_58;
    m->w_40 = 0;
    m->b_1C = 0;
    m->w_34 = 0;
    m->owner->mid_59C->hook_48->cb_E0 = func_03C810;
    o->link_48->w_DC = 0;
    w->f_FEC = 0;
    func_1E8F70((char *)n + 0x230);
    func_17E5F0((char *)n + 0x44);
    func_17D5B0((char *)o);
}
