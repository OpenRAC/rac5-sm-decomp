/* LEVEL_07.REL:0x1983A8: reviewed 72-byte candidate.
 * Reports whether the game's current target shares the entity's id, while the
 * flag bit 33 is set.
 * pinned C with gnu-ee-trial links 68/72 bytes; first differs at +24.
 * The retail computes the identifier comparison into the return register and
 * copies it to a second result register, which moves both branch targets by
 * one word (char result, ternary, temporary and a local pointer measured).
 * Retry: Recover the temporary or result type that keeps that copy.
 * No matching credit.
 */
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

int func_1983A8(Ent *ent)
{
    Game *game = &D_0024AA40;
    int result = 0;

    if (game->flags & 0x200000000ULL) {
        if (game->target != 0)
            result = game->target->id == ent->id;
    }
    return result;
}
