/* LEVEL_01:0x06ADB8 -- deux echantillons recopies dans un bloc,
   un drapeau modifie, et trois flottants ranges. */
typedef struct {
    float f[2];
    int   n;
} Sample;

typedef struct {
    char      pad000[0xF10];
    long long flags;
    char      pad118[0x58];
    Sample    s1;
    Sample    s2;
    float     x;
    char      pad18C[8];
    float     y;
    float     z;
} Block;

void func_06ADB8(Block *blk, Sample *first, Sample *second, int mode,
                 float fx, float fy, float fz)
{
    blk->flags = (blk->flags & ~4LL) | ((mode & 1) << 2);
    blk->s1 = *first;
    blk->s2 = *second;
    blk->x = fx;
    blk->y = fy;
    blk->z = fz;
}
