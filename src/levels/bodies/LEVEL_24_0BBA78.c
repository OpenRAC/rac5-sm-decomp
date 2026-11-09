/* LEVEL_24:0x0BBA78 -- placement copy of LEVEL_01_0C21B0.c: finds the current id in a 2x4 table, records its slot and fires events for every slot. */
extern int D_001CD688;
extern int D_001CFAE0;
extern int D_001CFAE4;
extern int D_001CFB48[2][4];
extern unsigned char D_001CFAEC;
extern void func_0A7ED0(int ev, int arg);
extern void func_0BAFE8(void);
extern void func_0BB9A0(int x);

void func_0BBA78(void)
{
    unsigned i;
    unsigned j;
    int cur = D_001CD688;
    int base;
    int *row;
    D_001CFAE0 = -1;
    D_001CFAE4 = -1;
    if (cur != 0) {
        for (i = 0; i < 2; i++) {
            row = D_001CFB48[i];
            base = i * 4 + 0x3E8;
            for (j = 0; j < 4; j++) {
                if (D_001CD688 == row[j]) {
                    D_001CFAE0 = j;
                    D_001CFAE4 = i;
                }
                func_0A7ED0(j + base, 0);
            }
        }
    }
    func_0A7ED0(0x3DC, 0);
    D_001CFAEC = 0;
    func_0BAFE8();
    func_0BB9A0(0);
}
