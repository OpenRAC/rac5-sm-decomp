/* LEVEL_08:0x1AD988 -- placement copy of LEVEL_04_196D68.c: resets the object's state bytes, stores a freshly obtained handle in its linked record and reports whether one was obtained. */
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

extern char *func_0736D0(void);

int func_1AD988(Obj *o)
{
    Link *link = o->link;

    o->b45 = 0;
    o->b46 = 0;
    link->handle = func_0736D0();
    return link->handle != 0;
}
