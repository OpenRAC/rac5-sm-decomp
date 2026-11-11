/* LEVEL_03:0x012498 -- placement copy of LEVEL_01_012478.c: adds a delta vector to the 12-byte table entry selected by the current slot index. */
typedef struct V3 {
    float x, y, z;
} V3;

extern V3 D_0024A408[];
extern int func_001020(void);

void func_012498(V3 *d)
{
    V3 *p = &D_0024A408[func_001020()];

    p->x = p->x + d->x;
    p->y = p->y + d->y;
    p->z = p->z + d->z;
}
