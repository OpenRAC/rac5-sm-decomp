/* FRONTEND:0x024788 -- scans a range table for the entries covering a key, optionally resuming after a previous entry, and asks a callback to accept each. */

struct Ent_024788 {
    unsigned int start;
    unsigned int end;
    int val;
    int cb;
};

struct Ctx_024788 {
    int (*fn)(struct Ctx_024788 *ctx, int cb, char *tab);
};

int func_024788(unsigned int key, char *tab, struct Ctx_024788 *ctx, int cont, int *out)
{
    struct Ent_024788 *ents;
    int idx;
    int result;

    result = 0;
    *out = 1;
    if (tab != 0) {
        idx = 0;
        ents = (struct Ent_024788 *)(tab + 8);
        if (cont != 0) {
            idx = (struct Ent_024788 *)key - ents;
            key = ((struct Ent_024788 *)key)->end - 1;
            if (ents[idx].start != 0xFFFFFFFF) {
                idx++;
            }
        } else {
            key = key - 1;
        }
        for (; ents[idx].start != 0xFFFFFFFF; idx++) {
            if (key < ents[idx].start) {
                continue;
            }
            if (!(key < ents[idx].end)) {
                continue;
            }
            if (ents[idx].cb != 0) {
                if (ctx->fn != 0) {
                    if (ctx->fn(ctx, ents[idx].cb, tab) != 0) {
                        if (result == 0) {
                            result = ents[idx].val;
                        }
                        *out = 0;
                        return result;
                    }
                }
            } else {
                if (result == 0) {
                    result = ents[idx].val;
                }
            }
        }
    }
    return result;
}
