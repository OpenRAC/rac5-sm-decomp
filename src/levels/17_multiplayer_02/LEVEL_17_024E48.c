/* LEVEL_17:0x024E48 -- placement copy of LEVEL_16_0254C8.c: sets one slot of an 8-entry id table (local or shared, by mode), clearing duplicates and their flags; returns 0 when the index is out of range or the slot already holds the id. */
typedef struct {
    char pad0[0x864];
    int a864[8];
    int a884[8];
} G;
extern G *D_001950B4[1];
extern int D_001950C0[8];

static __inline__ int *Ids(int mode)
{
    return mode ? D_001950C0 : D_001950B4[0]->a864;
}

int func_024E48(unsigned idx, int val, int mode)
{
    unsigned i;

    if (idx >= 8)
        return 0;
    if (Ids(mode)[idx] == val)
        return 0;
    for (i = 0; i < 8; i++) {
        if (Ids(mode)[i] == val) {
            D_001950B4[0]->a884[i] = 0;
            Ids(mode)[i] = 0;
        }
    }
    D_001950B4[0]->a884[idx] = 0;
    Ids(mode)[idx] = val;
    return 1;
}
