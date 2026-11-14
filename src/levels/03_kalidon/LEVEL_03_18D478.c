/* LEVEL_03:0x18D478 -- placement copy of LEVEL_01_191A00.c: resolves the four hashed keys of the table into their value slots. */
typedef struct {
    unsigned int key;
    int value;
} Entry;

extern Entry D_002211E8[4];
extern int func_1282D0(unsigned int);

void func_18D478(void)
{
    unsigned int i;

    for (i = 0; i < 4; i++) {
        D_002211E8[i].value = func_1282D0(D_002211E8[i].key);
    }
}
