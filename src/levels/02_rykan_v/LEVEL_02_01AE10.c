/* LEVEL_02:0x01AE10 -- placement copy of LEVEL_01_01A4B0.c: forwards a position raised by dy to the global manager's table method when it has one; returns the method's result or -1. */
typedef struct Mgr Mgr;
typedef struct {
    char pad_00[0x20];
    int (*fn)(Mgr *self, int a, int b, float *pos, int c, int d);
} Table;
struct Mgr {
    char pad_00[0x40];
    Table *table;
};

extern Mgr *D_002470CC;

int func_01AE10(int a, int b, float *pos, int c, int d, float unused, float dy)
{
    float v[4];

    if (D_002470CC != 0 && D_002470CC->table->fn != 0) {
        v[0] = pos[0];
        v[1] = pos[1];
        v[2] = pos[2];
        v[3] = pos[3];
        v[1] += dy;
        return D_002470CC->table->fn(D_002470CC, a, b, v, c, d);
    }
    return -1;
}
