/* LEVEL_05:0x15BAC8 -- placement copy of LEVEL_01_168A08.c: lazily creates the six cached handles. */

extern int D_001F6704;
extern int D_001F6708;
extern int D_001F670C;
extern int D_001F6710;
extern int D_001F6714;
extern int D_001F6718;
extern int D_00283CE0;
extern int D_00283CBC;
extern int D_00283CA8;
extern int D_00283D70;

int func_107F80(int key);
int func_0F8C40(int key);

void func_15BAC8(void)
{
    if (D_001F6704 == -1) {
        D_001F6704 = func_107F80((D_00283CE0 << 16) | 0x800030C5);
    }
    if (D_001F6708 == -1) {
        D_001F6708 = func_107F80((D_00283CBC << 16) | 0x80003045);
    }
    if (D_001F670C == -1) {
        D_001F670C = func_107F80((D_00283CA8 << 16) | 0x800030C5);
    }
    if (D_001F6710 == -1) {
        D_001F6710 = func_107F80((D_00283CA8 << 16) | 0x88003045);
    }
    if (D_001F6714 == -1) {
        D_001F6714 = func_107F80((D_00283D70 << 16) | 0x90003045);
    }
    if (D_001F6718 == -1) {
        D_001F6718 = func_0F8C40((D_00283D70 << 16) | 0x90003045);
    }
}
