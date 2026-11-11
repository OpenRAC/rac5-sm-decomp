/* LEVEL_01:0x15EFD0 -- state-change handler: ignores states 6 and 7 and unflagged objects, otherwise refreshes the object and, for states other than 10 and 11, restarts it; returns 3. */
typedef struct {
    char pad00[0x44];
    int f44;
} Block;

typedef struct {
    char pad00[0x45];
    unsigned char state;
    char pad46[0x1E];
    unsigned int flags;
} Obj;

extern Block D_00393AB8;

extern void func_1CD828(Block *b, Obj *o);
extern void func_0194C0(char *a0);
extern void func_1CAC80(Obj *o);
extern void func_15FB48(Obj *o, int a, int b);
extern void func_155458(char *o);
extern void func_07C670(void *object, int flag);

int func_15EFD0(Obj *o, int state)
{
    Block *b;

    if ((o->flags & 1) == 0 || state == 6 || state == 7) {
        return 1;
    }
    b = &D_00393AB8;
    func_1CD828(b, o);
    func_0194C0((char *)o);
    if ((unsigned int)(state - 10) < 2u) {
        func_155458((char *)o);
        func_07C670(o, 1);
        return 3;
    }
    func_1CAC80(o);
    func_15FB48(o, 0, b->f44);
    func_155458((char *)o);
    o->state = 2;
    func_07C670(o, 1);
    return 3;
}
