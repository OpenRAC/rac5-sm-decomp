/* LEVEL_01:0x191A00 -- resolves the four hashed keys of the table into their value slots. */
typedef struct {
    unsigned int key;
    int value;
} Entry;

extern Entry D_00208738[4];
extern int func_12A068(unsigned int);

void func_191A00(void)
{
    unsigned int i;

    for (i = 0; i < 4; i++) {
        D_00208738[i].value = func_12A068(D_00208738[i].key);
    }
}
