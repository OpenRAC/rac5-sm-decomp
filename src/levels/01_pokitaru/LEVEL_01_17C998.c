/* LEVEL_01:0x17C998 -- resolves the two hashed keys of each of the eleven table entries. */
typedef struct {
    char pad00[0x18];
    unsigned int key18;
    unsigned int key1C;
} Ent;

extern Ent D_00207A58[];
extern int func_12A068(unsigned int value);

void func_17C998(void)
{
    Ent *e = D_00207A58;
    unsigned int i = 0;

    do {
        i++;
        if (e->key18 != 0) {
            e->key18 = func_12A068(e->key18);
        }
        if (e->key1C != 0) {
            e->key1C = func_12A068(e->key1C);
        }
        e++;
    } while (i < 11);
}
