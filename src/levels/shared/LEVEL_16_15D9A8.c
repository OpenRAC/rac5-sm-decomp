/* LEVEL_16:0x15D9A8 -- claims the first free slot of the four-entry pool and returns it, or null when all are in use. */
typedef struct {
    char pad[0x60];
    unsigned char used;
    char pad61[3];
} Slot;

typedef struct {
    char pad[0x604];
    Slot slots[4];
} Pool;

typedef struct {
    char pad[0x58];
    Pool *pool;
} Obj;

Slot *func_15D9A8(Obj *obj)
{
    Pool *pool = obj->pool;
    Slot *s = pool->slots;
    char *q = (char *)pool;
    char *end = q + 0x190;

    do {
        if (!*(unsigned char *)(q + 0x664)) {
            *(unsigned char *)(q + 0x664) = 1;
            return s;
        }
        q += 0x64;
        s++;
    } while (q < end);
    return 0;
}
