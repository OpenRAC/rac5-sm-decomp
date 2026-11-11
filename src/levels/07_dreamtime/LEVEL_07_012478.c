/* LEVEL_07:0x012478 -- placement copy of LEVEL_01_012478.c: adds a delta vector to the 12-byte table entry selected by the current slot index. */
typedef struct V3 {
    float x, y, z;
} V3;

extern V3 D_00244E88[];
extern int func_001020(void);

void func_012478(V3 *d)
{
    V3 *p = &D_00244E88[func_001020()];

    p->x = p->x + d->x;
    p->y = p->y + d->y;
    p->z = p->z + d->z;
}
