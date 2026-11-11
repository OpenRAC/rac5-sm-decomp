/* LEVEL_07:0x0C4210 -- placement copy of LEVEL_01_0C21B0.c: finds the current id in a 2x4 table, records its slot and fires events for every slot. */
extern int D_00210D08;
extern int D_00213160;
extern int D_00213164;
extern int D_002131C8[2][4];
extern unsigned char D_0021316C;
extern void func_0B0658(int ev, int arg);
extern void func_0C3780(void);
extern void func_0C4138(int x);

void func_0C4210(void)
{
    unsigned i;
    unsigned j;
    int cur = D_00210D08;
    int base;
    int *row;
    D_00213160 = -1;
    D_00213164 = -1;
    if (cur != 0) {
        for (i = 0; i < 2; i++) {
            row = D_002131C8[i];
            base = i * 4 + 0x3E8;
            for (j = 0; j < 4; j++) {
                if (D_00210D08 == row[j]) {
                    D_00213160 = j;
                    D_00213164 = i;
                }
                func_0B0658(j + base, 0);
            }
        }
    }
    func_0B0658(0x3DC, 0);
    D_0021316C = 0;
    func_0C3780();
    func_0C4138(0);
}
