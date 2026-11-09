/* LEVEL_19:0x0B0F40 -- placement copy of LEVEL_01_0C21B0.c: finds the current id in a 2x4 table, records its slot and fires events for every slot. */
extern int D_001ABC08;
extern int D_001AE058;
extern int D_001AE05C;
extern int D_001AE0C0[2][4];
extern unsigned char D_001AE064;
extern void func_09C5D8(int ev, int arg);
extern void func_0B04B0(void);
extern void func_0B0E68(int x);

void func_0B0F40(void)
{
    unsigned i;
    unsigned j;
    int cur = D_001ABC08;
    int base;
    int *row;
    D_001AE058 = -1;
    D_001AE05C = -1;
    if (cur != 0) {
        for (i = 0; i < 2; i++) {
            row = D_001AE0C0[i];
            base = i * 4 + 0x3E8;
            for (j = 0; j < 4; j++) {
                if (D_001ABC08 == row[j]) {
                    D_001AE058 = j;
                    D_001AE05C = i;
                }
                func_09C5D8(j + base, 0);
            }
        }
    }
    func_09C5D8(0x3DC, 0);
    D_001AE064 = 0;
    func_0B04B0();
    func_0B0E68(0);
}
