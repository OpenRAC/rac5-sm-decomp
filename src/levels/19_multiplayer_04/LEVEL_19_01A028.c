/* LEVEL_19:0x01A028 -- placement copy of LEVEL_01_01BCB8.c: gathers matching entries from eleven groups and sorts them. */
typedef unsigned char u8;

typedef struct {
    u8 kind;
    char pad1[0xB];
    int type;
    int key;
    char pad14[0x2C];
} Entry;

typedef struct {
    Entry *items;
    unsigned int count;
} Group;

extern Group D_0019DB00[];

unsigned int func_01A028(Entry **out, int group, int kind, int skip)
{
    unsigned int i;
    unsigned int n = 0;
    unsigned int total = 0;
    int ok;

    for (i = 0; i < 11; i++) {
        unsigned int j;

        if (i != group && group != -1)
            continue;
        for (j = 0; j < D_0019DB00[i].count; j++) {
            Entry *e = (Entry *)((j << 6) + (unsigned int)D_0019DB00[i].items);

            if (e->kind != kind && kind != 2)
                continue;
            if (e->type == 2 || (e->type == 3 && !skip)) {
                out[n] = e;
                n++;
                total++;
            }
        }
    }
    do {
        unsigned int k;

        ok = 1;
        for (k = 0; k + 1 < total; k++) {
            if (out[k]->type == 3 && out[k + 1]->type == 2) {
                Entry *t = out[k];

                out[k] = out[k + 1];
                out[k + 1] = t;
                ok = 0;
            } else if (out[k]->key < out[k + 1]->key) {
                Entry *t = out[k];

                out[k] = out[k + 1];
                out[k + 1] = t;
                ok = 0;
            }
        }
    } while (!ok);
    return total;
}
