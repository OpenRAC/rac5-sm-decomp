/* LEVEL_18:0x117560 -- placement copy of LEVEL_16_118538.c: stores the value in the first table entry whose key
   matches. */
typedef struct {
    int key;
    int value;
    char pad[0xC];
} Entry;

extern Entry D_002E0260[];
extern unsigned int D_002E0440;

void func_117560(int key, int value)
{
    unsigned int i;

    for (i = 0; i < D_002E0440; i++) {
        if (D_002E0260[i].key == key) {
            D_002E0260[i].value = value;
            return;
        }
    }
}
