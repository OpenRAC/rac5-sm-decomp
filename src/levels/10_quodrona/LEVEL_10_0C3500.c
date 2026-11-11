/* LEVEL_10:0x0C3500 -- placement copy of LEVEL_01_0C21B0.c: finds the current id in a 2x4 table, records its slot and fires events for every slot. */
extern int D_00205A08;
extern int D_00207E60;
extern int D_00207E64;
extern int D_00207EC8[2][4];
extern unsigned char D_00207E6C;
extern void func_0AF770(int ev, int arg);
extern void func_0C2A70(void);
extern void func_0C3428(int x);

void func_0C3500(void)
{
    unsigned i;
    unsigned j;
    int cur = D_00205A08;
    int base;
    int *row;
    D_00207E60 = -1;
    D_00207E64 = -1;
    if (cur != 0) {
        for (i = 0; i < 2; i++) {
            row = D_00207EC8[i];
            base = i * 4 + 0x3E8;
            for (j = 0; j < 4; j++) {
                if (D_00205A08 == row[j]) {
                    D_00207E60 = j;
                    D_00207E64 = i;
                }
                func_0AF770(j + base, 0);
            }
        }
    }
    func_0AF770(0x3DC, 0);
    D_00207E6C = 0;
    func_0C2A70();
    func_0C3428(0);
}
