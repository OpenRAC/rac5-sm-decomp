/* USA LEVEL_01.REL:0x01A4B0, 136-byte candidate (14 November 2026).
 * Measured pinned: 6 differing words; first difference at 0x30.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
typedef struct Mgr Mgr;
typedef struct {
    char pad_00[0x20];
    int (*fn)(Mgr *self, int a, int b, float *pos, int c, int d);
} Table;
struct Mgr {
    char pad_00[0x40];
    Table *table;
};

extern Mgr *D_0022FBCC;

int func_01A4B0(int a, int b, float *pos, int c, int d, float unused, float dy)
{
    float v[4];

    if (D_0022FBCC != 0 && D_0022FBCC->table->fn != 0) {
        v[0] = pos[0];
        v[2] = pos[2];
        v[1] = pos[1] + dy;
        v[3] = pos[3];
        return D_0022FBCC->table->fn(D_0022FBCC, a, b, v, c, d);
    }
    return -1;
}
