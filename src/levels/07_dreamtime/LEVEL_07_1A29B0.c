/* LEVEL_07:0x1A29B0 -- placement copy of LEVEL_01_191A00.c: resolves the four hashed keys of the table into their value slots. */
typedef struct {
    unsigned int key;
    int value;
} Entry;

extern Entry D_0021D108[4];
extern int func_12D068(unsigned int);

void func_1A29B0(void)
{
    unsigned int i;

    for (i = 0; i < 4; i++) {
        D_0021D108[i].value = func_12D068(D_0021D108[i].key);
    }
}
