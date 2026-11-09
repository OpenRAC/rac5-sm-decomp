/* LEVEL_17:0x117EE8 -- placement copy of LEVEL_16_118538.c: stores the value in the first table entry whose key
   matches. */
typedef struct {
    int key;
    int value;
    char pad[0xC];
} Entry;

extern Entry D_002D11E0[];
extern unsigned int D_002D13C0;

void func_117EE8(int key, int value)
{
    unsigned int i;

    for (i = 0; i < D_002D13C0; i++) {
        if (D_002D11E0[i].key == key) {
            D_002D11E0[i].value = value;
            return;
        }
    }
}
