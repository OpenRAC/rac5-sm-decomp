/* LEVEL_03:0x164000 -- placement copy of LEVEL_01_168A08.c: lazily creates the six cached handles. */

extern int D_0021FCFC;
extern int D_0021FD00;
extern int D_0021FD04;
extern int D_0021FD08;
extern int D_0021FD0C;
extern int D_0021FD10;
extern int D_002B2CA0;
extern int D_002B2C7C;
extern int D_002B2C68;
extern int D_002B2D30;

int func_108650(int key);
int func_0FB398(int key);

void func_164000(void)
{
    if (D_0021FCFC == -1) {
        D_0021FCFC = func_108650((D_002B2CA0 << 16) | 0x800030C5);
    }
    if (D_0021FD00 == -1) {
        D_0021FD00 = func_108650((D_002B2C7C << 16) | 0x80003045);
    }
    if (D_0021FD04 == -1) {
        D_0021FD04 = func_108650((D_002B2C68 << 16) | 0x800030C5);
    }
    if (D_0021FD08 == -1) {
        D_0021FD08 = func_108650((D_002B2C68 << 16) | 0x88003045);
    }
    if (D_0021FD0C == -1) {
        D_0021FD0C = func_108650((D_002B2D30 << 16) | 0x90003045);
    }
    if (D_0021FD10 == -1) {
        D_0021FD10 = func_0FB398((D_002B2D30 << 16) | 0x90003045);
    }
}
