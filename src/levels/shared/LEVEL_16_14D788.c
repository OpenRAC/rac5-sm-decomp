/* LEVEL_16:0x14D788 -- claims the first free slot of a four-slot pool and returns it, else null. */
typedef struct {
    char pad[0x60];
    unsigned char used;
    char pad61[3];
} Slot;

typedef struct {
    char pad[0x270];
    Slot slots[4];
} Pool;

typedef struct {
    char pad[0x58];
    Pool *pool;
} Obj;

Slot *func_14D788(Obj *obj)
{
    Pool *pool = obj->pool;
    Slot *s = pool->slots;
    char *q = (char *)pool;
    char *end = q + 0x190;

    do {
        if (!*(unsigned char *)(q + 0x2D0)) {
            *(unsigned char *)(q + 0x2D0) = 1;
            return s;
        }
        q += 0x64;
        s++;
    } while (q < end);
    return 0;
}
