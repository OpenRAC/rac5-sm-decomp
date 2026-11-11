/* LEVEL_07:0x1892F8 -- placement copy of LEVEL_01_17C998.c: resolves the two hashed keys of each of the eleven table entries. */
typedef struct {
    char pad00[0x18];
    unsigned int key18;
    unsigned int key1C;
} Ent;

extern Ent D_0021C2C0[];
extern int func_12D068(unsigned int value);

void func_1892F8(void)
{
    Ent *e = D_0021C2C0;
    unsigned int i = 0;

    do {
        i++;
        if (e->key18 != 0) {
            e->key18 = func_12D068(e->key18);
        }
        if (e->key1C != 0) {
            e->key1C = func_12D068(e->key1C);
        }
        e++;
    } while (i < 11);
}
