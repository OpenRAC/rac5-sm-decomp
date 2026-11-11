/* LEVEL_19:0x118EE0 -- placement copy of LEVEL_16_118538.c: stores the value in the first table entry whose key
   matches. */
typedef struct {
    int key;
    int value;
    char pad[0xC];
} Entry;

extern Entry D_002E0060[];
extern unsigned int D_002E0240;

void func_118EE0(int key, int value)
{
    unsigned int i;

    for (i = 0; i < D_002E0240; i++) {
        if (D_002E0060[i].key == key) {
            D_002E0060[i].value = value;
            return;
        }
    }
}
