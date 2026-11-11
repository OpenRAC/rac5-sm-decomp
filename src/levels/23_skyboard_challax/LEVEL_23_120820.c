/* LEVEL_23:0x120820 -- placement copy of LEVEL_22_106578.c: stores a value into a slot chosen by two codes. */
typedef struct {
    char pad[0x8C0];
    int slot[1];
} Tbl;

extern Tbl *D_001C73AC;
extern int func_11FA88(int *a, int *b);

int func_120820(int val, int x, int y)
{
    int off;

    if (func_11FA88(&x, &y) == 0) {
        return 0;
    }
    off = 0x50;
    if (y == 3 || y == 0x16) {
        switch (x) {
        case 0:
            off = 0x50;
            break;
        case 1:
            off = 0x54;
            break;
        case 2:
            off = 0x58;
            break;
        case 3:
            off = 0x5C;
            break;
        }
    } else if (y == 6 || y == 0x17) {
        switch (x) {
        case 0:
            off = 0x60;
            break;
        case 1:
            off = 0x64;
            break;
        case 2:
            off = 0x68;
            break;
        case 3:
            off = 0x6C;
            break;
        }
    }
    *(int *)((char *)D_001C73AC->slot + off) = val;
    return 1;
}
