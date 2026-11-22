/* LEVEL_08:0x21D758 -- scales an amount by a factor and the table entry reached by the current time, returning the truncated product. */
typedef struct { float threshold; float scale; } Entry;
extern char *D_0023CB2C;

int func_21D758(Entry *table, unsigned int count, int amount, float scale)
{
    float factor = (float)amount * scale / 25.0f;
    float time = (float)*(unsigned int *)(D_0023CB2C + 0x1372C) / 25.0f;
    Entry *p;
    Entry *end = table + (count - 1);

    for (p = table; p != end; p++) {
        if (p->threshold <= time) {
            break;
        }
    }
    return (int)(p->scale * factor);
}
