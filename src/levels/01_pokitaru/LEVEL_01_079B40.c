/* LEVEL_01:0x079B40 -- dispatches one of three table entries for a small mode index when a global count is below 16. */

extern unsigned int D_001F6118;
extern char D_0020F860[];
extern char D_0020F870[];
extern char D_0020F880[];
extern void func_079AD8();

void func_079B40(void *a0, int a1, int a2)
{
    if (D_001F6118 < 0x10) {
        switch (a2) {
        case 0:
            func_079AD8(a0, a1, D_0020F880);
            break;
        case 1:
            func_079AD8(a0, a1, D_0020F860);
            break;
        case 2:
            func_079AD8(a0, a1, D_0020F870);
            break;
        }
    }
}
