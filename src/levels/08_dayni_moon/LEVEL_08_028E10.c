/* LEVEL_08:0x028E10 -- the template held by the global lands in the block
   the indexed entry owns. */
typedef struct {
    float f[12];
    int x;
} Elem;

typedef struct {
    char pad000[0xE8];
    Elem e;
} Slot;

extern void *D_0023CB2C;
extern Elem D_002801C0;

void func_028E10(int index)
{
    ((Slot *)((char *)D_0023CB2C + index * 52))->e = D_002801C0;
}
