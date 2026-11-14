/* LEVEL_04:0x196D68 -- resets the object's state bytes, stores a freshly obtained handle in its linked record and reports whether one was obtained. */
typedef struct Link {
    char pad_00[0xC];
    char *handle;
} Link;

typedef struct Obj {
    char pad_00[0x45];
    unsigned char b45;
    unsigned char b46;
    char pad_47[0x11];
    Link *link;
} Obj;

extern char *func_06FA68(void);

int func_196D68(Obj *o)
{
    Link *link = o->link;

    o->b45 = 0;
    o->b46 = 0;
    link->handle = func_06FA68();
    return link->handle != 0;
}
