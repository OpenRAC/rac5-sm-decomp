/* FRONTEND:0x01FE90 -- looks up the entry for a menu id (0x18 is special, ids below 12 use a table) and falls back to the default entry when the lookup yields the missing marker. */
extern unsigned int D_00032780[];
extern char D_000326F8[];
extern void *D_0003274C;
extern void *func_01F778(unsigned int key);

void *func_01FE90(unsigned int id)
{
    void *r;

    if (id == 0)
        return D_0003274C;
    if (id == 0x18)
        return func_01F778(0xB8);
    if (id < 12) {
        r = func_01F778(D_00032780[id]);
        if (r != (void *)D_000326F8)
            return r;
    }
    return D_0003274C;
}
