/* LEVEL_04:0x012290 -- placement copy of LEVEL_01_012478.c: adds a delta vector to the 12-byte table entry selected by the current slot index. */
typedef struct V3 {
    float x, y, z;
} V3;

extern V3 D_00249D88[];
extern int func_000E28(void);

void func_012290(V3 *d)
{
    V3 *p = &D_00249D88[func_000E28()];

    p->x = p->x + d->x;
    p->y = p->y + d->y;
    p->z = p->z + d->z;
}
