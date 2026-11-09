/* LEVEL_09:0x18B900 -- returns 9 when the inner check succeeds, otherwise
   the object's current state. */
typedef struct {
    char pad[0x54];
    void *p54;
} Inner;

typedef struct {
    char pad[0x45];
    unsigned char state;
    char pad46[0x54 - 0x46];
    Inner *inner;
} Obj;

extern char *func_019740(void);
extern int func_0810E8(void *p, char *value);

int func_18B900(Obj *obj)
{
    Inner *inner = obj->inner;

    if (func_0810E8(inner->p54, func_019740()))
        return 9;
    return obj->state;
}
