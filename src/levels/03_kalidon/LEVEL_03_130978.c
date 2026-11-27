/* LEVEL_03:0x130978 -- placement copy of LEVEL_01_1325B0.c: looks a key up in the shared table (when the table is enabled and ready) and returns the value stored with it, or 0 when it is not found. */
typedef struct {
    int *table;
    char pad04[4];
    unsigned char b08;
    char pad09[3];
    unsigned char b0C;
    char pad0D[3];
    int count;
    unsigned char wide;
    unsigned char ready;
} Reg;

extern Reg D_003A2BA0;
extern int func_130AF8(Reg *r, int a);

int func_130978(int key)
{
    int *p;
    unsigned int i;

    if (D_003A2BA0.ready == 0) {
        return 0;
    }
    if (key == 0) {
        return 0;
    }
    if (D_003A2BA0.count == 0) {
        return 0;
    }
    if (D_003A2BA0.b08 == 0) {
        return 0;
    }
    if (func_130AF8(&D_003A2BA0, D_003A2BA0.b0C) == 0) {
        return 0;
    }
    p = D_003A2BA0.table;
    if (D_003A2BA0.wide != 0) {
        p = p + 1;
    }
    for (i = 0; i < D_003A2BA0.count; i++) {
        if (p[0] == key) {
            return p[2];
        }
        p += 3;
        if (D_003A2BA0.wide != 0) {
            p += 1;
        }
    }
    return 0;
}
