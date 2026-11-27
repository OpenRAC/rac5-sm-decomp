/* LEVEL_15:0x0FC878 -- inserts a looked-up 11-bit value into three words of an object and refreshes each part. */
typedef struct {
    int idx;
    unsigned int w;
    char pad8[4];
    char part[0x3C];
} Slot;
typedef struct {
    char pad0[0x60];
    Slot slot[2];
    int idxF0;
    unsigned int wF4;
    char padF8[0xC];
    char partF[4];
} Obj;
extern int D_001AFE00[];
extern void func_13E048(void *p);
extern void func_125938(void *p);

void func_0FC878(Obj *o)
{
    unsigned int i;
    char *q;

    q = o->slot[0].part;
    for (i = 0; i < 2; i++) {
        o->slot[i].w = (o->slot[i].w & 0xF800FFFF) | (D_001AFE00[o->slot[i].idx] << 16);
        func_13E048(q);
        q += sizeof(Slot);
    }
    o->wF4 = (o->wF4 & 0xF800FFFF) | (D_001AFE00[o->idxF0] << 16);
    func_125938(o->partF);
}
