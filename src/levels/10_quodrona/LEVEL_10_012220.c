/* LEVEL_10:0x012220 -- placement copy of LEVEL_01_012478.c: adds a delta vector to the 12-byte table entry selected by the current slot index. */
typedef struct V3 {
    float x, y, z;
} V3;

extern V3 D_00238988[];
extern int func_000DB0(void);

void func_012220(V3 *d)
{
    V3 *p = &D_00238988[func_000DB0()];

    p->x = p->x + d->x;
    p->y = p->y + d->y;
    p->z = p->z + d->z;
}
