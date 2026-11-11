/* LEVEL_01:0x01BBE0 -- counts matching elements across a table of arrays, four units per match. */
typedef struct {
    unsigned char b0;
    char pad1[0xB];
    int w0C;
    char pad10[0x30];
} Elem;
typedef struct {
    Elem *arr;
    unsigned int count;
} Ent;
extern Ent D_001F0EE0[11];

int func_01BBE0(int idx, int type, int flag)
{
    int total = 0;
    unsigned int i;
    for (i = 0; i < 11; i++) {
        if (i == idx || idx == -1) {
            unsigned int j;
            for (j = 0; j < D_001F0EE0[i].count; j++) {
                Elem *e = (Elem *)((j << 6) + (unsigned int)D_001F0EE0[i].arr);
                if (e->w0C == 3 && flag)
                    continue;
                if (e->b0 == type || type == 2)
                    total += 4;
            }
        }
    }
    return total;
}
