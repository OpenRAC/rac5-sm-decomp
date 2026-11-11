/* LEVEL_02:0x012460 -- placement copy of LEVEL_01_012478.c: adds a delta vector to the 12-byte table entry selected by the current slot index. */
typedef struct V3 {
    float x, y, z;
} V3;

extern V3 D_00246A88[];
extern int func_001020(void);

void func_012460(V3 *d)
{
    V3 *p = &D_00246A88[func_001020()];

    p->x = p->x + d->x;
    p->y = p->y + d->y;
    p->z = p->z + d->z;
}
