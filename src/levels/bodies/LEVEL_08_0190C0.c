/* LEVEL_08:0x0190C0 -- copies the indexed row of the global table into the
   argument's block, then the linked object is copied as well. */
typedef struct {
    float f[16];
} Block;

typedef struct {
    Block b;
    void *link;
    int a;
    int second;
    unsigned char c;
} Row;

typedef struct {
    Block b;
    void *info;
    char pad44;
    unsigned char flag;
    char pad46[0x54 - 0x46];
    void *other;
    char pad58[0x5C - 0x58];
    int x;
    char pad60[0x64 - 0x60];
    int y;
} Dest;

typedef struct {
    char pad00[0x44];
    int origin;
} Base;

typedef struct {
    char pad00[0x2C];
    int size;
} Thing;

extern char D_0024FC50[];
extern char D_00237F4C[];

void *memcpy(void *dst, void *src, int size);

void func_0190C0(Dest *dst)
{
    Base *base = *(Base **)D_0024FC50;
    Row **rows = *(Row ***)D_00237F4C;
    int index = ((char *)dst - (char *)base->origin) >> 7;
    Row *row = &(*rows)[index];

    dst->b = row->b;
    dst->x = row->a;
    dst->y = row->second;
    dst->flag = row->c;
    if (row->link)
        memcpy(dst->other, row->link, ((Thing *)dst->info)->size);
}
