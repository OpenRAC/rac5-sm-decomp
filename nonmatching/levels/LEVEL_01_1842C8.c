/* USA LEVEL_01:1842C8, 224-byte candidate; measured 26 November 2026.
 * Profile pinned, assembler gnu-ee-trial; options: default.
 * Compiled 224 bytes: 6 differing words; first difference +0x94. No matching credit.
 * Remaining issue: schedule/register: retail installs the hook callback before clearing the link
 * word but keeps the node in a1 and the callback in a2; the retail statement order gives node
 * v1/callback a1 (10 w), the order with the link clear first gets the registers but swaps the
 * two blocks (6 w; 720 orders, inline reset/hook helpers, 6 flags x 3 profiles); func_183EC8
 * called with (o, entry) as retail passes the entry in a1 although its accepted definition takes
 * one parameter and ignores a1 (conflict)
 * Reopen with new caller/type evidence or a source hypothesis that resolves the recorded
 * difference without changing accepted callers.
 */

/* LEVEL_01:0x1842C8 -- state handler: picks a table entry by level index, resets the node and installs a callback. */
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
    o->link_48->w_DC = 0;
    m->owner->mid_59C->hook_48->cb_E0 = func_03C810;
    w->f_FEC = 0;
    func_1E8F70((char *)n + 0x230);
    func_17E5F0((char *)n + 0x44);
    func_17D5B0((char *)o);
}
