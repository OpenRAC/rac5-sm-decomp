/* LEVEL_24:0x0120E0 -- placement copy of LEVEL_01_012478.c: adds a delta vector to the 12-byte table entry selected by the current slot index. */
typedef struct V3 {
    float x, y, z;
} V3;

extern V3 D_001FB488[];
extern int func_000E28(void);

void func_0120E0(V3 *d)
{
    V3 *p = &D_001FB488[func_000E28()];

    p->x = p->x + d->x;
    p->y = p->y + d->y;
    p->z = p->z + d->z;
}
