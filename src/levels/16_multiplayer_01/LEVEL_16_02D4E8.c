/* LEVEL_16:0x02D4E8 -- searches the table of (key, slot) pairs for the pair whose slot record names the given owner and returns its key, or 0. */
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

extern Pair D_001E1D20[];
extern int D_001E1F5C;
extern Game *D_001E00A8;

int func_02D4E8(int owner)
{
    Pair *p;
    Pair *end;
    Game *g;

    p = D_001E1D20;
    end = D_001E1D20 + D_001E1F5C;
    if (p < end) {
        g = D_001E00A8;
        do {
            if (p->key != 0 && ((Slot *)((int)g->slots + (p->slot << 6)))->owner == owner) {
                return p->key;
            }
            p++;
        } while (p < end);
    }
    return 0;
}
