/* LEVEL_05:0x02A888 -- sets or clears bit 0 of the looked-up object's flag
   byte. */
typedef struct {
    char pad[0x45];
    unsigned char flags;
} Obj;

extern Obj *func_081FF0(int id);

void func_02A888(int id, int enable)
{
    Obj *obj = func_081FF0(id);

    if (obj != 0) {
        if (enable)
            obj->flags |= 1;
        else
            obj->flags &= ~1;
    }
}
