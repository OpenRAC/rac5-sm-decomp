/* LEVEL_01:0x15BF38 -- consumes one use of the object's counter and, when
   the object passes the check, refreshes it with value 0x15. */
typedef struct {
    char pad[0x60];
    int count;
} Sub;

typedef struct {
    char pad[0x45];
    unsigned char state;
    char pad46[0x58 - 0x46];
    Sub *sub;
} Obj;

extern int func_07CAB8(Obj *obj, int mode);
extern void func_15C260(Obj *obj, int state, unsigned char value);

void func_15BF38(Obj *obj)
{
    obj->sub->count--;
    if (func_07CAB8(obj, 0))
        func_15C260(obj, obj->state, 0x15);
}
