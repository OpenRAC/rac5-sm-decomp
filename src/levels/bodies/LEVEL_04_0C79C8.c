/* LEVEL_04:0x0C79C8 -- placement copy of LEVEL_01_0C21B0.c: finds the current id in a 2x4 table, records its slot and fires events for every slot. */
extern int D_00215EC8;
extern int D_00218320;
extern int D_00218324;
extern int D_00218388[2][4];
extern unsigned char D_0021832C;
extern void func_0B38A8(int ev, int arg);
extern void func_0C6F38(void);
extern void func_0C78F0(int x);

void func_0C79C8(void)
{
    unsigned i;
    unsigned j;
    int cur = D_00215EC8;
    int base;
    int *row;
    D_00218320 = -1;
    D_00218324 = -1;
    if (cur != 0) {
        for (i = 0; i < 2; i++) {
            row = D_00218388[i];
            base = i * 4 + 0x3E8;
            for (j = 0; j < 4; j++) {
                if (D_00215EC8 == row[j]) {
                    D_00218320 = j;
                    D_00218324 = i;
                }
                func_0B38A8(j + base, 0);
            }
        }
    }
    func_0B38A8(0x3DC, 0);
    D_0021832C = 0;
    func_0C6F38();
    func_0C78F0(0);
}
