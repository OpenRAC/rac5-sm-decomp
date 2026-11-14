/* USA LEVEL_08.REL:0x20FE50, 164-byte candidate (14 November 2026).
 * Measured pinned: 29 differing words; first difference at 0x4.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
typedef struct Link {
    char pad0[4];
    struct Link *next;
} Link;

typedef struct {
    char pad00[8];
    float f08;
    char pad0C[0xB4];
    int index;
    char padC4[0x10];
    Link link;
} Entry;

typedef struct {
    float f00;
    char pad04[0x24];
} Sample;

extern float fabsf(float v);

static __inline__ unsigned char Near(float a, float b, float eps)
{
    unsigned char r = 1;

    if (!(fabsf(a - b) < eps)) {
        r = 0;
    }
    return r;
}

Entry *func_20FE50(Link *head, float x, float y)
{
    Link *node;
    Entry *e;
    Sample *samples;

    for (node = head->next; node != head; node = node->next) {
        e = (Entry *)((char *)node - 0xD4);
        samples = (Sample *)((char *)node - 0x70);
        if (Near(samples[e->index].f00, x, 0.05f)) {
            if (Near(e->f08, y, 0.01f)) {
                return e;
            }
        }
    }
    return 0;
}
