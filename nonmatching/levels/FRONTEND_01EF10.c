/* USA FRONTEND:01EF10, 192-byte candidate; measured 26 November 2026.
 * Profile pinned, assembler gnu-ee-trial; options: -fno-gcse.
 * Compiled 192 bytes: 2 differing words; first difference +0x54. No matching credit.
 * Remaining issue: null test after the match exit (48 -> 2 words, right length 192 B, 21 raw-
 * identical placements): natural for-loop over the bucket chain with a single-exit alias tail
 * reproduces the loop, the two-nop alignment and the alias merge; retail keeps beqz n after the
 * break and reuses the loaded type, ours drops the null test (default: 4 B short, 23 w) or
 * reloads the type in its place (-fno-gcse: 2 w); found-pointer, combined-test,
 * while/for/continue forms tried
 * Reopen with new caller/type evidence or a source hypothesis that resolves the recorded
 * difference without changing accepted callers.
 */

/* FRONTEND:0x01EF10 -- looks up an entry by id and type in a hashed table, resolving a type-0x14 alias (copying its fields over once); returns the entry or 0. */
struct Node {
    unsigned int id;
    char pad04[0x60];
    unsigned int type;
    int w68;
    struct Node *next;
    char pad70[8];
    int w78;
    int w7C;
    char pad80[4];
    struct Node *alias;
};

struct Table {
    char pad00[0xC0];
    struct Node *buckets[1];
};

struct Node *func_01EF10(unsigned int id, unsigned int type, struct Table *table)
{
    struct Node *n;
    struct Node *a;

    if (table == 0) {
        return 0;
    }
    if (id == 0) {
        return 0;
    }
    for (n = table->buckets[(id & 0x3FF) ^ (type | (type << 5))]; n != 0; n = n->next) {
        if (n->id == id && (n->type == type || n->type == 0x14)) {
            break;
        }
    }
    if (n == 0) {
        return 0;
    }
    if (n->type == 0x14) {
        a = n->alias;
        if (a != 0 && n->w7C == 0 && a->w7C != 0) {
            n->w7C = a->w7C;
            n->w68 = a->w68;
            if (n->w78 == 0) {
                n->w78 = a->w78;
            }
        }
        n = a;
    }
    return n;
}
