/* USA LEVEL_16.REL:0x112E88, 220-byte candidate (21 November 2026).
 * Measured pinned: 11 differing words; first difference at 0x2C.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
typedef struct {
    int w[8];
} Slot;

typedef struct {
    char pad00[0x50];
    int active;
} Entry;

typedef struct {
    char pad00[0xF8];
    int player;
} Obj;

extern int D_001D04A0;
extern int D_001B4C28;
extern char D_001B8078[];

extern void func_0254C8(int slot, int value, int player);
extern Entry *func_0220C8(int id, int player);

void func_112E88(Obj *o)
{
    Slot *s;
    int *p;
    int player;
    unsigned int i;
    unsigned int j;

    if (D_001D04A0 != 0x14) {
        s = (Slot *)((D_001D04A0 - 0x10) * 0x60 + (D_001B8078 + D_001B4C28 * 0x20));
        player = o->player;
        for (i = 0; i < 8; i++) {
            func_0254C8(i, 0, player);
        }
        p = s->w;
        for (j = 0; j < 8; j++) {
            if (func_0220C8(*p, player)->active == 1) {
                func_0254C8(j, *p, player);
            }
            p++;
        }
    }
}
