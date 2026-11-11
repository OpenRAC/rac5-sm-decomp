/* LEVEL_10:0x17F020 -- placement copy of LEVEL_01_17C998.c: resolves the two hashed keys of each of the eleven table entries. */
typedef struct {
    char pad00[0x18];
    unsigned int key18;
    unsigned int key1C;
} Ent;

extern Ent D_00210918[];
extern int func_127EC8(unsigned int value);

void func_17F020(void)
{
    Ent *e = D_00210918;
    unsigned int i = 0;

    do {
        i++;
        if (e->key18 != 0) {
            e->key18 = func_127EC8(e->key18);
        }
        if (e->key1C != 0) {
            e->key1C = func_127EC8(e->key1C);
        }
        e++;
    } while (i < 11);
}
