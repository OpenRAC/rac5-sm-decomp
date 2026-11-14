/* LEVEL_02:0x16B230 -- reports whether every table slot between the current and the target index (inclusive of the far end) is set. */
typedef struct Table {
    char pad00[0x6B0];
    unsigned char slot[1];
} Table;

typedef struct Inner {
    char pad00[0x58];
    Table *table;
} Inner;

typedef struct Outer {
    char pad00[0x14];
    Inner *inner;
} Outer;

typedef struct State {
    char pad00[0x4C];
    unsigned char cur;
    unsigned char target;
} State;

typedef struct Obj {
    char pad00[0x54];
    State *state;
} Obj;
int func_16B230(Obj *o)
{
    State *s = o->state;
    unsigned char cur = s->cur;
    unsigned char target = s->target;
    unsigned char i;

    if (cur == target) {
        return 1;
    }
    if (cur < target) {
        for (i = cur + 1; i <= target; i++) {
            if (((Outer *)s)->inner->table->slot[i] == 0) {
                return 0;
            }
        }
    } else {
        for (i = cur; i > target; i--) {
            if (((Outer *)s)->inner->table->slot[i] == 0) {
                return 0;
            }
        }
    }
    return 1;
}
