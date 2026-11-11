/* LEVEL_07:0x1684E0 -- finds the object's key in the five-entry table,
   stores the matching index in the object and reports whether it found one. */
typedef struct {
    int key;
    int value;
} Entry;

typedef struct {
    int key;
} Kind;

typedef struct {
    char pad[0x40];
    Kind *kind;
} Desc;

typedef struct {
    char pad[0xD8];
    Desc *desc;
    char padDC[0x113 - 0xDC];
    unsigned char index;
} Obj;

extern Entry D_0021B9E8[];

int func_1684E0(void *unused, Obj *obj)
{
    unsigned int i;

    for (i = 0; i < 5; i++) {
        if (D_0021B9E8[i].key == obj->desc->kind->key) {
            obj->index = i;
            return 1;
        }
    }
    return 0;
}
