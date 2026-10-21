/* LEVEL_10:0x179048 -- the pool hands back a slot, and the sample is
   dropped into it when the pool is ready. */
typedef struct {
    float f[2];
} Vec2;

typedef struct {
    Vec2 v;
    int i;
} Sample;

typedef struct {
    Sample s;
    int spare;
} Slot;

extern char D_0039F300[];

Slot *func_0A0CF8(int *ready, void *pool, int mode);

void func_179048(Sample *src)
{
    int ready;
    Slot *slot = func_0A0CF8(&ready, D_0039F300, 1);

    if (ready) {
        slot->s = *src;
        slot->spare = 0;
    }
}
