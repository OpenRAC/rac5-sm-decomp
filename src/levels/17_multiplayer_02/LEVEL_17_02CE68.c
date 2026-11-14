/* LEVEL_17:0x02CE68 -- placement copy of LEVEL_16_02D4E8.c: searches the table of (key, slot) pairs for the pair whose slot record names the given owner and returns its key, or 0. */
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

extern Pair D_001D3020[];
extern int D_001D325C;
extern Game *D_001D13A8;

int func_02CE68(int owner)
{
    Pair *p;
    Pair *end;
    Game *g;

    p = D_001D3020;
    end = D_001D3020 + D_001D325C;
    if (p < end) {
        g = D_001D13A8;
        do {
            if (p->key != 0 && ((Slot *)((int)g->slots + (p->slot << 6)))->owner == owner) {
                return p->key;
            }
            p++;
        } while (p < end);
    }
    return 0;
}
