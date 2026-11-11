/* LEVEL_10:0x02BA58 -- placement copy of LEVEL_05_02A888.c: sets or clears bit 0 of the looked-up object's flag
   byte. */
typedef struct {
    char pad[0x45];
    unsigned char flags;
} Obj;

extern int func_084C50(char *object);

void func_02BA58(char *object, int enable)
{
    Obj *obj = (Obj *)func_084C50(object);

    if (obj != 0) {
        if (enable)
            obj->flags |= 1;
        else
            obj->flags &= ~1;
    }
}
