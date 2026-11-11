/* LEVEL_06:0x14EF48 -- placement copy of LEVEL_01_15EFD0.c: state-change handler: ignores states 6 and 7 and unflagged objects, otherwise refreshes the object and, for states other than 10 and 11, restarts it; returns 3. */
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

extern Block D_003806E0;

extern void func_1B9C90(Block *b, Obj *o);
extern void func_017D68(char *a0);
extern void func_1B70E8(Obj *o);
extern void func_14FAC0(Obj *o, int a, int b);
extern void func_14BB50(char *o);
extern void func_076268(void *object, int flag);

int func_14EF48(Obj *o, int state)
{
    Block *b;

    if ((o->flags & 1) == 0 || state == 6 || state == 7) {
        return 1;
    }
    b = &D_003806E0;
    func_1B9C90(b, o);
    func_017D68((char *)o);
    if ((unsigned int)(state - 10) < 2u) {
        func_14BB50((char *)o);
        func_076268(o, 1);
        return 3;
    }
    func_1B70E8(o);
    func_14FAC0(o, 0, b->f44);
    func_14BB50((char *)o);
    o->state = 2;
    func_076268(o, 1);
    return 3;
}
