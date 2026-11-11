/* LEVEL_04:0x194970 -- updates three edge flags of a record from two probes and starts the matching action for the object's current mode. */

struct Rec_194970 {
    char pad[0x2C];
    unsigned char edgeA;
    unsigned char edgeB;
    unsigned char hold;
};

struct Pair_194970 {
    int hi;
    int lo;
};

struct Obj_194970 {
    char pad0[0x45];
    unsigned char mode;
    char pad1[0xE];
    struct Pair_194970 *pair;
    struct Rec_194970 *rec;
};

extern char D_0024F950[];

extern int func_087C38(int a0, char *a1);
extern void func_194378(struct Obj_194970 *a0, int a1);

int func_194970(struct Obj_194970 *obj)
{
    struct Pair_194970 *pair;
    struct Rec_194970 *rec;
    int a;
    int b;
    int ret;
    char *g;

    g = D_0024F950;
    pair = obj->pair;
    rec = obj->rec;
    a = func_087C38(pair->lo, g + 0x30);
    b = func_087C38(pair->hi, g + 0x30);
    ret = 0;
    switch (obj->mode) {
    case 1:
        if ((rec->edgeA == 0 && a != 0) || rec->hold != 0) {
            func_194378(obj, 2);
            ret = 1;
        }
        break;
    case 0:
        if ((rec->edgeB == 0 && b != 0) || rec->hold != 0) {
            func_194378(obj, 3);
            ret = 1;
        }
        break;
    case 3:
        if (rec->edgeA == 0 && a != 0) {
            rec->hold = 1;
        }
        break;
    case 2:
        if (rec->edgeB == 0 && b != 0) {
            rec->hold = 1;
        }
        break;
    }
    rec->edgeB = b;
    rec->edgeA = a;
    return ret;
}
