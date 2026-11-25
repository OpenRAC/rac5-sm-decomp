/* LEVEL_16:0x118580 -- finds a record by key, replaces it with the last record and shrinks the count. */
typedef struct {
    unsigned int key;
    int w4;
    int w8;
    int wC;
    int w10;
} Rec;

extern int D_002E00C0;
extern Rec D_002DFEE0[];

void func_118580(unsigned int key)
{
    unsigned int i;

    for (i = 0; i < D_002E00C0; i++) {
        if (D_002DFEE0[i].key == key) {
            D_002E00C0 = D_002E00C0 - 1;
            D_002DFEE0[i] = D_002DFEE0[D_002E00C0];
            return;
        }
    }
}
