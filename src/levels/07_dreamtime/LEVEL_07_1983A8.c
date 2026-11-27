/* LEVEL_07:0x1983A8 -- reports whether the current target shares the entity id while flag bit 33 is set. */
typedef struct {
    char pad[0x5C];
    int id;
} Ent;

typedef struct {
    char pad[0x334];
    Ent *target;
    char pad338[0x960 - 0x338];
    unsigned long long flags;
} Game;

extern Game D_0024AA40;

long long func_1983A8(Ent *ent)
{
    Game *game = &D_0024AA40;
    long long result;
    int same;

    result = 0;
    if (game->flags & 0x200000000ULL) {
        if (game->target != 0) {
            same = game->target->id == ent->id;
            result = same;
        }
    }
    return result;
}
