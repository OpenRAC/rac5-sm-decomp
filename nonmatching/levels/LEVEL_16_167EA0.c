/* USA LEVEL_16.REL:0x167EA0, 244-byte candidate (21 November 2026).
 * Measured pinned: 10 differing words; first difference at 0x6C.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
struct Player_167EA0 {
    char pad00[0xF4];
    int index;
};

struct Info_167EA0 {
    struct Player_167EA0 *player;
    char pad04[0x3C];
    unsigned int flags;
};

struct Obj_167EA0 {
    char pad00[0x58];
    struct Info_167EA0 *info;
};

extern char D_001D6630[];
extern char D_001D6648[];
extern char D_001D6660[];
extern void func_0A2180(int a0, void *a1, int a2, unsigned int a3);

void func_167EA0(struct Obj_167EA0 *o, struct Player_167EA0 **who)
{
    struct Info_167EA0 *i;

    i = o->info;
    if (i->flags != 0) {
        if (i->flags & 4) {
            if (i->player == *who) {
                func_0A2180(i->player->index - 1, D_001D6630, -0x2F, 0xFFFFFFFFu);
            }
        }
        if (i->flags & 2) {
            if (i->player == *who) {
                func_0A2180(i->player->index - 1, D_001D6648, -0x30, 0xFFFFFFFFu);
            }
        }
        if (i->flags & 2) {
            if (i->player == *who) {
                func_0A2180(i->player->index - 1, D_001D6660, -0x60, 0xFFFFFFFFu);
            }
        }
    }
}
