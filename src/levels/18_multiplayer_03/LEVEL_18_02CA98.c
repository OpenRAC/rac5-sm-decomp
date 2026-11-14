/* LEVEL_18:0x02CA98 -- placement copy of LEVEL_16_02D4E8.c: searches the table of (key, slot) pairs for the pair whose slot record names the given owner and returns its key, or 0. */
typedef struct Pair {
    int key;
    int slot;
} Pair;

typedef struct Slot {
    char pad_00[0x20];
    int owner;
    char pad_24[0x1C];
} Slot;

typedef struct Game {
    char pad_00[0x2D8];
    Slot *slots;
} Game;

extern Pair D_001E20A0[];
extern int D_001E22DC;
extern Game *D_001E0428;

int func_02CA98(int owner)
{
    Pair *p;
    Pair *end;
    Game *g;

    p = D_001E20A0;
    end = D_001E20A0 + D_001E22DC;
    if (p < end) {
        g = D_001E0428;
        do {
            if (p->key != 0 && ((Slot *)((int)g->slots + (p->slot << 6)))->owner == owner) {
                return p->key;
            }
            p++;
        } while (p < end);
    }
    return 0;
}
