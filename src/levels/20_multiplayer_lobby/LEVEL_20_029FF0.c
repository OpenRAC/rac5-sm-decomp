/* LEVEL_20:0x029FF0 -- placement copy of LEVEL_16_02D4E8.c: searches the table of (key, slot) pairs for the pair whose slot record names the given owner and returns its key, or 0. */
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

extern Pair D_001396A0[];
extern int D_001398DC;
extern Game *D_00137A28;

int func_029FF0(int owner)
{
    Pair *p;
    Pair *end;
    Game *g;

    p = D_001396A0;
    end = D_001396A0 + D_001398DC;
    if (p < end) {
        g = D_00137A28;
        do {
            if (p->key != 0 && ((Slot *)((int)g->slots + (p->slot << 6)))->owner == owner) {
                return p->key;
            }
            p++;
        } while (p < end);
    }
    return 0;
}
