/* LEVEL_24:0x16F108 -- placement copy of LEVEL_01_191A00.c: resolves the four hashed keys of the table into their value slots. */
typedef struct {
    unsigned int key;
    int value;
} Entry;

extern Entry D_001D9698[4];
extern int func_11FB68(unsigned int);

void func_16F108(void)
{
    unsigned int i;

    for (i = 0; i < 4; i++) {
        D_001D9698[i].value = func_11FB68(D_001D9698[i].key);
    }
}
