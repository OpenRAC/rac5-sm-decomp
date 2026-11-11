/* LEVEL_22:0x0B0660 -- placement copy of LEVEL_01_0C21B0.c: finds the current id in a 2x4 table, records its slot and fires events for every slot. */
extern int D_0015BD88;
extern int D_0015E1E0;
extern int D_0015E1E4;
extern int D_0015E248[2][4];
extern unsigned char D_0015E1EC;
extern void func_09CC68(int ev, int arg);
extern void func_0AFBD0(void);
extern void func_0B0588(int x);

void func_0B0660(void)
{
    unsigned i;
    unsigned j;
    int cur = D_0015BD88;
    int base;
    int *row;
    D_0015E1E0 = -1;
    D_0015E1E4 = -1;
    if (cur != 0) {
        for (i = 0; i < 2; i++) {
            row = D_0015E248[i];
            base = i * 4 + 0x3E8;
            for (j = 0; j < 4; j++) {
                if (D_0015BD88 == row[j]) {
                    D_0015E1E0 = j;
                    D_0015E1E4 = i;
                }
                func_09CC68(j + base, 0);
            }
        }
    }
    func_09CC68(0x3DC, 0);
    D_0015E1EC = 0;
    func_0AFBD0();
    func_0B0588(0);
}
