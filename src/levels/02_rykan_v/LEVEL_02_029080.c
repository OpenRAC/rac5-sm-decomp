/* LEVEL_02:0x029080 -- the template held by the global lands in the block
   the indexed entry owns. */
typedef struct {
    float f[12];
    int x;
} Elem;

typedef struct {
    char pad000[0xE8];
    Elem e;
} Slot;

extern void *D_00208C2C;
extern Elem D_00248440;

void func_029080(int index)
{
    ((Slot *)((char *)D_00208C2C + index * 52))->e = D_00248440;
}
