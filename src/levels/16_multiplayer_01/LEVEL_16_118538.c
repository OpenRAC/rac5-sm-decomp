/* LEVEL_16:0x118538 -- stores the value in the first table entry whose key
   matches. */
typedef struct {
    int key;
    int value;
    char pad[0xC];
} Entry;

extern Entry D_002DFEE0[];
extern unsigned int D_002E00C0;

void func_118538(int key, int value)
{
    unsigned int i;

    for (i = 0; i < D_002E00C0; i++) {
        if (D_002DFEE0[i].key == key) {
            D_002DFEE0[i].value = value;
            return;
        }
    }
}
