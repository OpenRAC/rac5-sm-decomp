/* LEVEL_01:0x12ED08 -- looks up a stored value by kind and slot index. */
typedef struct T {
    char pad0[0x8C0];
    int tbl[1];
} T;
extern T *D_001F3FAC;
extern int func_12EC10(int *a, int *b);

int func_12ED08(int a, int b)
{
    int off;

    if (!func_12EC10(&a, &b))
        return 0;
    off = 0x50;
    if (b == 3 || b == 0x16) {
        switch (a) {
        case 0:
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
    } else if (b == 6 || b == 0x17) {
        switch (a) {
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
    return *(int *)((char *)D_001F3FAC + 0x8C0 + off);
}
