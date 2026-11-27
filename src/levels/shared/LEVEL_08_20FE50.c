/* LEVEL_08:0x20FE50 -- walks a ring of link records and returns the first entry whose two float fields are both near the arguments. */
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

static __inline__ int Near(float a, float b, float eps)
{
    return fabsf(a - b) < eps;
}

Entry *func_20FE50(Link *head, float x, float y)
{
    Link *node;
    Entry *e;
    Sample *samples;
    float f;

    for (node = head->next; node != head; node = node->next) {
        e = (Entry *)((char *)node - 0xD4);
        samples = (Sample *)((char *)node - 0x70);
        f = e->f08;
        if ((Near(samples[e->index].f00, x, 0.05f) & 0xFF) != 0) {
            if ((Near(f, y, 0.01f) & 0xFF) != 0)
                return e;
        }
    }
    return 0;
}
