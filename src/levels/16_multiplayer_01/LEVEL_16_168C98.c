/* LEVEL_16:0x168C98 -- counts the leading non-empty entries of the six-slot list. */
typedef struct { char pad[0x8]; void *items[6]; } List;
typedef struct { char pad[0x54]; List *list; } Obj;

int func_168C98(Obj *obj){ List *list = obj->list; unsigned char i = 0; void **p = list->items;
 if (p[0] != 0) { do { i++; } while (i != 6 && *(void **)((char *)p + (i << 2)) != 0); }
 return i; }
